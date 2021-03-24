//
// Generated with FrostbiteGen by Chod
// File: SDK\OriginPresenceBackendData.h
// Created: Wed Mar 10 19:05:25 2021
//

#ifndef FBGEN_OriginPresenceBackendData_H
#define FBGEN_OriginPresenceBackendData_H

#include "Array.h"
#include "PresenceBackendData.h"

class OriginPresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E730;
	}
	Array<const char*> m_CommerceCategories; // 0x18
}; // size = 0x20

#endif // FBGEN_OriginPresenceBackendData_H
