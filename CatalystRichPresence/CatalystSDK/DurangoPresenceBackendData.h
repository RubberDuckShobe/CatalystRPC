//
// Generated with FrostbiteGen by Chod
// File: SDK\DurangoPresenceBackendData.h
// Created: Wed Mar 10 19:07:07 2021
//

#ifndef FBGEN_DurangoPresenceBackendData_H
#define FBGEN_DurangoPresenceBackendData_H

#include "DurangoCurrentActivity.h"
#include "PresenceBackendData.h"

class DurangoPresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E910;
	}
	unsigned int m_TitleId; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_ServiceConfigId; // 0x20
	const char* m_PartySessionTemplate; // 0x28
	const char* m_PartyInviteContext; // 0x30
	const char* m_GameInviteContext; // 0x38
	DurangoCurrentActivity m_CurrentActivity; // 0x40
	bool m_MultiplayerPrivilegeNeeded; // 0x44
	bool m_EnableGameInviteSupport; // 0x45
	bool m_EnablePartySupport; // 0x46
	bool m_AutoCreateParty; // 0x47
}; // size = 0x48

#endif // FBGEN_DurangoPresenceBackendData_H
