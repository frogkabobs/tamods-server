// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h"

// Desired hooks should be added here
static void addHooks() {

	// Server Settings
	Hooks::addUScript(&TrServerSettingsInfo_LoadServerSettings, "Function TribesGame.TrServerSettingsInfo.LoadServerSettings");

	// Loadouts
	Hooks::addUScript(&TrPlayerReplicationInfo_GetCharacterEquip, "Function TribesGame.TrPlayerReplicationInfo.GetCharacterEquip");
}

void onDLLProcessAttach() {
	Logger::debug("Initializing...");
#ifdef RELEASE
	Logger::setLevel(Logger::LOG_NONE);
#else
	Logger::setLevel(Logger::LOG_DEBUG);
#endif

	g_config.parseFile();
	Logger::debug("DLL Process Attach");

	addHooks();

	Hooks::init(true);

	g_TAServerClient.connectToGameServerLauncher("127.0.0.1", 3000);
}

void onDLLProcessDetach() {
	Logger::debug("DLL Process Detach");
	Hooks::cleanup();
	Logger::cleanup();
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)onDLLProcessAttach, NULL, 0, NULL);
		break;
    case DLL_PROCESS_DETACH:
		onDLLProcessDetach();
        break;
    }
    return TRUE;
}

