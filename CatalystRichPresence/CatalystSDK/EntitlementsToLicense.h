//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitlementsToLicense.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EntitlementsToLicense_H
#define FBGEN_EntitlementsToLicense_H

#include "Array.h"
struct EntitlementsToLicense
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428802D0;
	}
	Array<const char*> m_Entitlements; // 0x0
	const char* m_License; // 0x8
}; // size = 0x10

#endif // FBGEN_EntitlementsToLicense_H
