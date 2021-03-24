//
// Generated with FrostbiteGen by Chod
// File: SDK\XenonPresenceBackendData.h
// Created: Wed Mar 10 18:58:42 2021
//

#ifndef FBGEN_XenonPresenceBackendData_H
#define FBGEN_XenonPresenceBackendData_H

#include "PresenceBackendData.h"

class XenonPresenceBackendData :
	public PresenceBackendData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E9D0;
	}
	unsigned int m_TitleId; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_XenonPresenceBackendData_H
