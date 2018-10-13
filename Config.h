#pragma once

#include <fstream>
#include <string>
#include <regex>
#include <queue>
#include <map>
#include <set>

#include "buildconfig.h"

#include "SdkHeaders.h"
#include "Geom.h"
#include "Lua.h"
#include "Logger.h"
#include "Utils.h"
#include "Hooks.h"
#include "Data.h"
#include "LoadoutTypes.h"
#include "GameBalance.h"

enum class MapRotationMode {
	SEQUENTIAL = 0,
	RANDOM,
	MAP_ROTATION_MAX
};

// Definition of a server-defines Class
// A set of allowed items the server may allow
// Can be used to 'bring back' classes
struct CustomClass {
	// The OOTB ingame class this corresponds to (i.e. ID for light/medium/heavy)
	int ootbClass;

	// The class ID this actually corresponds to; can be OOTB or a removed class
	// If 0, the OOTB class actually in the loadout is assumed
	int armorClass;

	// The items allowed for this 'class'
	std::set<int> allowedItems;

public:
	CustomClass() : ootbClass(0), armorClass(0), allowedItems() {}
	CustomClass(int ootbClass, int armorClass) : ootbClass(ootbClass), armorClass(armorClass), allowedItems() {}
	bool doesLoadoutMatch(int ootbClass, const std::map<int, int>& loadout);
};

struct ServerSettings {
	int TimeLimit = 25;
	int WarmupTime = 20;
	int OvertimeLimit = 10;
	int RespawnTime = 5;
	int SniperRespawnDelay = 0;

	int MaxPlayers = 32;
	TeamAssignTypes TeamAssignType = TAT_BALANCED;
	bool NakedSpawn = false;
	bool AutoBalanceTeams = true;

	int FlagDragLight = 0;
	int FlagDragMedium = 0;
	int FlagDragHeavy = 0;
	int FlagDragDeceleration = 0;

	bool FriendlyFire = false;
	float FriendlyFireMultiplier = 1.0f;
	int BaseDestructionKickLimit = 0;
	int FriendlyFireDamageKickLimit = 0;
	int FriendlyFireKillKickLimit = 0;

	float EnergyMultiplier = 1.0f;
	float AoESizeMultiplier = 1.0f;
	float AoEDamageMultiplier = 1.0f;

	int LightCountLimit = 32;
	int MediumCountLimit = 32;
	int HeavyCountLimit = 32;

	int ArenaRounds = 3;
	int CTFCapLimit = 5;
	int TDMKillLimit = 100;
	int ArenaLives = 25;
	int RabbitScoreLimit = 30;
	int CaHScoreLimit = 50;

	float VehicleHealthMultiplier = 1.0f;
	int GravCycleLimit = 4;
	int BeowulfLimit = 2;
	int ShrikeLimit = 2;
	int GravCycleSpawnTime = 30;
	int BeowulfSpawnTime = 120;
	int ShrikeSpawnTime = 120;

	bool BaseAssets = true;
	bool BaseUpgrades = true;
	bool PoweredDeployables = true;
	bool GeneratorRegen = false;
	bool GeneratorDestroyable = true;
	bool BaseAssetFriendlyFire = false;
	bool DeployableFriendlyFire = false;

	bool SkiingEnabled = true;
	bool CTFBlitzAllFlagsMove = false;
	bool ForceHardcodedLoadouts = false;

	MapRotationMode mapRotationMode = MapRotationMode::SEQUENTIAL;
	std::vector<std::string> mapRotation;
	int mapRotationIndex = -1;

	// Weapon bans
	std::set<int> bannedItems;
	std::set<int> disabledEquipPointsLight;
	std::set<int> disabledEquipPointsMedium;
	std::set<int> disabledEquipPointsHeavy;
	
	// Whether the server requires players to adhere to allowed 'Item Sets' (analogous to server-defined allowed classes)
	bool useCustomClasses;
	std::map<std::string, CustomClass> customClasses;

	GameBalance::Items::ItemsConfig weaponProperties;
	GameBalance::Items::DeviceValuesConfig deviceValueProperties;
	GameBalance::Classes::ClassesConfig classProperties;
	GameBalance::Vehicles::VehiclesConfig vehicleProperties;
	GameBalance::VehicleWeapons::VehicleWeaponsConfig vehicleWeaponProperties;
	void ApplyGameBalanceProperties();

	void ApplyAsDefaults();
	void ApplyToGame(ATrServerSettingsInfo* s);
};

class Config {
private:
	void parseFile(std::string filePath);
	void setConfigVariables();
	void addDefaultMapRotation();
public:
	Config();
	~Config();

	void reset();
	void load();

public:
	Lua lua;

	ServerSettings serverSettings;

	bool connectToTAServer;
	bool connectToClients;
	bool allowUnmoddedClients;
	HardCodedLoadouts hardcodedLoadouts;
};

extern Config g_config;