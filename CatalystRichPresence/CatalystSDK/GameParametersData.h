//
// Generated with FrostbiteGen by Chod
// File: SDK\GameParametersData.h
// Created: Wed Mar 10 19:06:40 2021
//

#ifndef FBGEN_GameParametersData_H
#define FBGEN_GameParametersData_H

#include "PersistenceGameType.h"
#include "GamePeer2PeerMode.h"
#include "GameNetworkTopology.h"
#include "Array.h"
#include "Asset.h"

class GameParametersData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284B440;
	}
	const char* m_ServerName; // 0x18
	PersistenceGameType m_GameType; // 0x20
	unsigned int m_QueueCapacity; // 0x24
	unsigned int m_Mod; // 0x28
	unsigned int m_MaxSpectators; // 0x2c
	unsigned int m_DefaultMaxPlayers; // 0x30
	GameNetworkTopology m_GameTopology; // 0x34
	GamePeer2PeerMode m_PeerMode; // 0x38
	GameNetworkTopology m_VoipTopology; // 0x3c
	Array<GameAttributeData> m_Attributes; // 0x40
	Array<GameRoleInformation*> m_RoleConfiguration; // 0x48
	unsigned int m_TeamCount; // 0x50
	bool m_OpenToInvites; // 0x54
	bool m_OpenToMatchmaking; // 0x55
	bool m_OpenToJoinByPlayer; // 0x56
	bool m_OpenToBrowsing; // 0x57
	bool m_Ranked; // 0x58
	bool m_JoinInProgressSupported; // 0x59
	unsigned char _0x5a[0x6];
}; // size = 0x60

#endif // FBGEN_GameParametersData_H
