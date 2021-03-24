//
// Generated with FrostbiteGen by Chod
// File: SDK\BlazePresenceBackendData.h
// Created: Wed Mar 10 19:08:30 2021
//

#ifndef FBGEN_BlazePresenceBackendData_H
#define FBGEN_BlazePresenceBackendData_H

#include "Array.h"
#include "PresenceBackendData.h"

class BlazePresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284EC10;
	}
	const char* m_DefaultRoleName; // 0x18
	Array<MatchmakingSession*> m_MatchmakingSessions; // 0x20
	bool m_UseDemanglerService; // 0x28
	bool m_UseDirtySockVoip; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_BlazePresenceBackendData_H
