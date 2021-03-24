// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.
#include "pch.h"
#include "mem.h"
#include "MovementState.h"
#include "PresenceManager.h"
#include "CatalystSDK/OnlineRichPresenceString.h"
#include "CatalystSDK/PamOnlineRichPresenceData.h"
#include "CatalystSDK/PamClientMissionEntity.h"
#include <iostream>

HMODULE dllModule;
uintptr_t moduleBase;

void UpdatePresence(const char* state, const char* details, const char* largeImage, const char* smallImage, const char* smallImageText) {
    
}

DWORD WINAPI MainThread(HMODULE hModule) {
    moduleBase = (uintptr_t)GetModuleHandle(L"MirrorsEdgeCatalyst.exe");

    PresenceManager presenceManager = PresenceManager::PresenceManager();
	presenceManager.UpdatePresence();

    while (true)
    {
		presenceManager.RunCallbacks();

        Sleep(16);

		bool statusChange = false;

		District* districtPtr = (District*)mem::FindDMAAddy(moduleBase + 0x023DD648, { 0x78, 0xD80, 0x20, 0x68, 0x20, 0x10, 0x210 });
		if (districtPtr != nullptr) {
			presenceManager.currentDistrict = *districtPtr;
			if (presenceManager.currentDistrict != presenceManager.lastDistrict) {
				presenceManager.lastDistrict = presenceManager.currentDistrict;
				statusChange = true;
			}
		}

		//top-notch variable naming right here lads
		PamClientMissionEntity** pamClientMissionEntityPtrPtr = (PamClientMissionEntity**)mem::FindDMAAddy(moduleBase + 0x0214C2A8, { 0x40, 0x48, 0x18, 0x38, 0x20, 0x10, 0x218 });
	    if (pamClientMissionEntityPtrPtr != nullptr) {
			PamClientMissionEntity* pamClientMissionEntityPtr = *pamClientMissionEntityPtrPtr;
			if (pamClientMissionEntityPtr != nullptr) {
				presenceManager.currentMission = *(const char**)mem::FindDMAAddy(moduleBase + 0x0214C2A8, { 0x40, 0x48, 0x18, 0x38, 0x20, 0x10, 0x218, 0x28, 0x18, 0x10 });
			}
			else {
				presenceManager.currentMission = "None";
			}
			if (presenceManager.currentMission != presenceManager.lastMission) {
				presenceManager.lastMission = presenceManager.currentMission;
				statusChange = true;
			}
		}

		MovementState* movementStatePtr = (MovementState*)mem::FindDMAAddy(0x142576FDC);
		if (movementStatePtr != nullptr) {
			MovementState movementState = *movementStatePtr;
			if (movementState == -1) {
				presenceManager.isLoading = true;
			}
			else {
				presenceManager.isLoading = false;
			}
			if (presenceManager.isLoading != presenceManager.lastLoading) {
				presenceManager.lastLoading = presenceManager.isLoading;
				statusChange = true;
			}
		}

		if (statusChange) {
			presenceManager.UpdatePresence();
		}
    }
}

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        dllModule = hModule;
        DisableThreadLibraryCalls(hModule);
        CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr));
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}