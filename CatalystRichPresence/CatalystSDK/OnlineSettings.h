//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineSettings.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineSettings_H
#define FBGEN_OnlineSettings_H

#include "BackendType.h"
#include "OnlineEnvironment.h"
#include "OnlineProviderAsset.h"
#include "Array.h"
#include "LogLevelType.h"
#include "OnlineRichPresenceData.h"
#include "LicenseConfiguration.h"
#include "SystemSettings.h"

class OnlineSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DE30;
	}
	BackendType m_Backend; // 0x20
	BackendType m_PeerBackend; // 0x24
	OnlineEnvironment m_Environment; // 0x28
	unsigned char _0x2c[0x4];
	OnlineProviderAsset* m_Provider; // 0x30
	Array<OnlinePlatformConfiguration> m_Platforms; // 0x38
	const char* m_ServiceNameOverride; // 0x40
	LogLevelType m_LogLevel; // 0x48
	int m_BlazeLogLevel; // 0x4c
	int m_DirtySockLogLevel; // 0x50
	unsigned char _0x54[0x4];
	OnlineRichPresenceData* m_RichPresenceData; // 0x58
	LicenseConfiguration* m_LicenseConfig; // 0x60
	const char* m_MatchmakingOptions; // 0x68
	const char* m_MatchmakingMode; // 0x70
	const char* m_Region; // 0x78
	const char* m_Country; // 0x80
	const char* m_PingSite; // 0x88
	const char* m_MatchmakingToken; // 0x90
	unsigned int m_NegativeUserCacheRefreshPeriod; // 0x98
	unsigned char _0x9c[0x4];
	const char* m_ServerLoginEmail; // 0xa0
	const char* m_ServerLoginPassword; // 0xa8
	const char* m_ServerLoginPersonaName; // 0xb0
	int m_BlazeServerConnectionTimeout; // 0xb8
	int m_BlazeServerTimeout; // 0xbc
	int m_BlazeClientConnectionTimeout; // 0xc0
	int m_BlazeClientTimeout; // 0xc4
	int m_PeerPort; // 0xc8
	unsigned int m_BlazeCachedUserRefreshInterval; // 0xcc
	int m_DirtySockServerPacketQueueCapacity; // 0xd0
	unsigned char _0xd4[0x4];
	const char* m_ClientVersionOverride; // 0xd8
	bool m_AssertOnPresenceRequestFailures; // 0xe0
	bool m_ClientIsPresenceEnabled; // 0xe1
	bool m_ServerIsPresenceEnabled; // 0xe2
	bool m_IsSecure; // 0xe3
	bool m_EnableQoS; // 0xe4
	bool m_MatchmakeImmediately; // 0xe5
	bool m_ServerIsReconfigurable; // 0xe6
	bool m_SupportHostMigration; // 0xe7
	bool m_ServerAllowAnyReputation; // 0xe8
	bool m_DirtySockVoipEnabled; // 0xe9
	bool m_MatchmakingRoleEnabled; // 0xea
	bool m_EnableNucleusLtOverride; // 0xeb
	unsigned char _0xec[0x4];
}; // size = 0xf0

#endif // FBGEN_OnlineSettings_H
