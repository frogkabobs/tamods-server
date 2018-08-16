#include "TAServerClient.h"

TAServer::Client g_TAServerClient;

namespace TAServer {
	std::shared_ptr<Message> parseMessageFromJson(short msgKind, const json& j) {
		std::shared_ptr<Message> msg;
		switch (msgKind) {
		case TASRV_MSG_KIND_GAME_2_LAUNCHER_LOADOUT_REQUEST:
			msg = std::make_shared<Game2LauncherLoadoutRequest>();
			break;
		case TASRV_MSG_KIND_LAUNCHER_2_GAME_LOADOUT_MESSAGE:
			msg = std::make_shared<Launcher2GameLoadoutMessage>();
			break;
		default:
			msg = std::make_shared<Message>();
		}
		if (!msg->fromJson(j)) {
			msg = std::make_shared<Message>();
		}
		return msg;
	}

	bool Client::connect(std::string host, int port) {

		boost::system::error_code err;

		if (socket->is_open()) {
			Logger::error("Attempted to connect to game server launcher when connection is already open");
			return false;
		}

		boost::asio::ip::address addr = boost::asio::ip::address::from_string(host, err);
		if (err) {
			Logger::error("Failed to parse game server launcher host address: %s", err.message().c_str());
			return false;
		}


		tcp::endpoint endpoint(addr, port);

		Logger::debug("Connecting to %s : %d...", addr.to_string().c_str(), port);
		socket->connect(endpoint, err);
		if (err) {
			Logger::error("Failed to connect to game server launcher: %s", err.message().c_str());
			return false;
		}

		return true;
	}

	bool Client::disconnect() {
		boost::system::error_code err;
		if (!socket->is_open()) {
			Logger::warn("Attempted to close connection to game server launcher when connection is not open");
			return false;
		}

		socket->close(err);
		if (err) {
			Logger::error("Failed to close game server launcher connection: %s", err.message());
			return false;
		}
		return true;
	}

	bool Client::isConnected() {
		return socket->is_open();
	}

	void Client::sendMessage(std::shared_ptr<Message> message, boost::system::error_code& err) {
		if (!socket->is_open()) {
			err.assign(boost::system::errc::not_connected, boost::system::system_category());
			return;
		}
		
		json msgJson;
		message->toJson(msgJson);
		std::string msgString = msgJson.dump();
		short msgKind = message->getMessageKind();
		// Two bytes for the message kind + length of json
		short msgSize = (short)msgString.length() + 2;

		
		std::ostringstream toWrite;
		toWrite.write(reinterpret_cast<char*>(&msgSize), sizeof(msgSize));
		toWrite.write(reinterpret_cast<char*>(&msgKind), sizeof(msgKind));
		toWrite << msgString;
		size_t numBytesWritten = socket->write_some(boost::asio::buffer(toWrite.str(), toWrite.str().length()), err);
		if (numBytesWritten != msgSize + 2) {
			Logger::debug("Expected to send %d bytes, sent %d", msgSize + 2, numBytesWritten);
			err.assign(boost::system::errc::io_error, boost::system::system_category());
		}
	}

	std::shared_ptr<Message> Client::recvMessage(boost::system::error_code& err) {
		if (!socket->is_open()) {
			err.assign(boost::system::errc::not_connected, boost::system::system_category());
			return std::make_shared<Message>();
		}

		short msgSize;
		size_t numBytesRead = socket->read_some(boost::asio::buffer(&msgSize, 2), err);
		if (numBytesRead != 2) {
			err.assign(boost::system::errc::bad_message, boost::system::system_category());
		}
		if (err) {
			return std::make_shared<Message>();
		}

		short msgKind;
		numBytesRead = socket->read_some(boost::asio::buffer(&msgKind, 2), err);
		if (numBytesRead != 2) {
			err.assign(boost::system::errc::bad_message, boost::system::system_category());
		}
		if (err) {
			return std::make_shared<Message>();
		}

		std::vector<char> rawMsg(msgSize - 2);
		numBytesRead = socket->read_some(boost::asio::buffer(rawMsg, msgSize - 2), err);
		if (numBytesRead != msgSize - 2) {
			Logger::debug("Expected to read %d bytes, read %d", msgSize - 2, numBytesRead);
			err.assign(boost::system::errc::bad_message, boost::system::system_category());
		}
		if (err) {
			return std::make_shared<Message>();
		}

		std::string msgString = std::string(rawMsg.begin(), rawMsg.end());
		json msgJson;
		try
		{
			msgJson = json::parse(msgString);
		}
		catch (const json::parse_error&)
		{
			err.assign(boost::system::errc::bad_message, boost::system::system_category());
			return std::make_shared<Message>();
		}
		
		std::shared_ptr<Message> msg = parseMessageFromJson(msgKind, msgJson);

		return msg;
	}

	bool Client::retrieveLoadout(FUniqueNetId uniquePlayerId, int classId, int slot, std::map<int, int>& resultEquipMap) {
		std::shared_ptr<Game2LauncherLoadoutRequest> req = std::make_unique<Game2LauncherLoadoutRequest>();
		req->uniquePlayerId = uniquePlayerId;
		req->classId = classId;
		req->slot = slot;

		std::shared_ptr<Message> reqMsg = req;

		boost::system::error_code err;
		sendMessage(req, err);
		if (err) {
			Logger::error("Failed to send loadout request: %s", err.message());
			return false;
		}

		Logger::debug("Sent message");

		std::shared_ptr<Message> response = recvMessage(err);
		if (err) {
			Logger::error("Failed to receive loadout request response: %s", err.message());
			return false;
		}

		if (response->getMessageKind() != TASRV_MSG_KIND_LAUNCHER_2_GAME_LOADOUT_MESSAGE) {
			Logger::error("Received wrong kind of loadout request response message; kind: %d", response->getMessageKind());
			return false;
		}
		std::shared_ptr<Launcher2GameLoadoutMessage> respParsed = std::dynamic_pointer_cast<Launcher2GameLoadoutMessage>(response);
		respParsed->toEquipPointMap(resultEquipMap);

		return true;
	}
}

