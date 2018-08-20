// dllmain.cpp : Defines the entry point for the DLL application.
#include "dllmain.h"

// Desired hooks should be added here
static void addHooks() {

	// Server Settings
	Hooks::addUScript(&TrServerSettingsInfo_LoadServerSettings, "Function TribesGame.TrServerSettingsInfo.LoadServerSettings");

	// Loadouts
	Hooks::addUScript(&TrPlayerReplicationInfo_GetCharacterEquip, "Function TribesGame.TrPlayerReplicationInfo.GetCharacterEquip");
	//Hooks::addUScript(&TrDevice_GetReloadTime, "Function TribesGame.TrDevice.GetReloadTime");

	// TAServer Game Info
	Hooks::addUScript(&TrGame_RequestTeam, "Function TribesGame.TrGame.RequestTeam");

	//ATrDevice_AssaultRifle* defaultAR = ((ATrDevice_AssaultRifle*)ATrDevice_AssaultRifle::StaticClass()->Default);
	//ATrDevice_Spinfusor* defaultSpin = ((ATrDevice_Spinfusor*)ATrDevice_Spinfusor::StaticClass()->Default);
	//ATrDevice_NovaSlug* defaultColt = ((ATrDevice_NovaSlug*)ATrDevice_NovaSlug::StaticClass()->Default);

	//defaultSpin->m_fReloadTime = 5.0f;
	//
	//defaultAR->MaxAmmoCount = 50;
	//defaultAR->m_fReloadTime = 5.0f;


	//defaultColt->MaxAmmoCount = 20;
	//defaultColt->m_nCarriedAmmo = 72;
	//defaultColt->m_nMaxCarriedAmmo = 72;
	////defaultColt->FireInterval.Clear();
	////defaultColt->FireInterval.Add(1.2f);
	////defaultColt->FireInterval.Set(0, 1.2f);
	//defaultColt->m_fReloadTime = 5.35f;
	////defaultColt->InstantHitDamage.Set(0, 10.0f);
	////defaultColt->m_bIsKickbackAdditive = true;
	////defaultColt->m_bAllowHoldDownFire = false;
	////defaultColt->m_nLowAmmoWarning = 1;
	////defaultColt->m_fDefaultAccuracy = 0.980000;
	////defaultColt->m_fAccuracyLossOnShot = 0.450000;
	////defaultColt->m_fAccuracyLossMax = 0.100000;
	////defaultColt->m_fAccuracyCorrectionRate = 0.380000;
	////defaultColt->WeaponRange = 10000.000000;
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

	Hooks::init(false);

	if (g_config.serverMode == ServerMode::TASERVER) {
		Logger::info("Connecting to TAServer...");
		if (!g_TAServerClient.connect("127.0.0.1", 9002)) {
			Logger::error("Failed to connect to TAServer launcher.");
		}
	}
	else {
		Logger::info("Not attempting connection");
	}
}

void onDLLProcessDetach() {
	if (g_TAServerClient.isConnected()) {
		if (!g_TAServerClient.disconnect()) {
			Logger::error("Failed to disconnect from TAServer launcher.");
		}
	}
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

