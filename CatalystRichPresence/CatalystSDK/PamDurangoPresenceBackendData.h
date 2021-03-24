//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDurangoPresenceBackendData.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDurangoPresenceBackendData_H
#define FBGEN_PamDurangoPresenceBackendData_H

#include "PamDurangoGameStatAndProgressData.h"
#include "DurangoPresenceBackendData.h"

class PamDurangoPresenceBackendData :
	public DurangoPresenceBackendData // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880770;
	}
	PamDurangoGameStatAndProgressData* m_GameStatAndProgress; // 0x48
}; // size = 0x50

#endif // FBGEN_PamDurangoPresenceBackendData_H
