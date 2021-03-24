//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlinePlatformConfiguration.h
// Created: Wed Mar 10 19:05:28 2021
//

#ifndef FBGEN_OnlinePlatformConfiguration_H
#define FBGEN_OnlinePlatformConfiguration_H

#include "GamePlatform.h"
#include "OnlinePlatformData.h"
#include "OnlineServicesAsset.h"
#include "Array.h"
struct OnlinePlatformConfiguration
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DCB0;
	}
	GamePlatform m_Platform; // 0x0
	unsigned char _0x4[0x4];
	OnlinePlatformData* m_PlatformData; // 0x8
	OnlineServicesAsset* m_Services; // 0x10
	Array<PresenceBackendData*> m_ClientBackends; // 0x18
	Array<ServerBackendData*> m_ServerBackends; // 0x20
	bool m_IsFallback; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_OnlinePlatformConfiguration_H
