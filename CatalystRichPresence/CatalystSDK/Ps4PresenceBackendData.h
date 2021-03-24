//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps4PresenceBackendData.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_Ps4PresenceBackendData_H
#define FBGEN_Ps4PresenceBackendData_H

#include "Ps4AgeSettings.h"
#include "PresenceBackendData.h"

class Ps4PresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E970;
	}
	Ps4AgeSettings m_AgeSettings; // 0x18
	bool m_MultiplayerPrivilegeNeeded; // 0x28
	bool m_EnableGameInviteSupport; // 0x29
	bool m_EnablePartySupport; // 0x2a
	unsigned char _0x2b[0x5];
}; // size = 0x30

#endif // FBGEN_Ps4PresenceBackendData_H
