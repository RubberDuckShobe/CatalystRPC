//
// Generated with FrostbiteGen by Chod
// File: SDK\NucleusPresenceBackendData.h
// Created: Wed Mar 10 19:05:32 2021
//

#ifndef FBGEN_NucleusPresenceBackendData_H
#define FBGEN_NucleusPresenceBackendData_H

#include "Array.h"
#include "PresenceBackendData.h"

class NucleusPresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284EAF0;
	}
	const char* m_PsnClientId; // 0x18
	Array<NucleusPlatformConfiguration> m_Platforms; // 0x20
}; // size = 0x28

#endif // FBGEN_NucleusPresenceBackendData_H
