//
// Generated with FrostbiteGen by Chod
// File: SDK\EntitlementsToLicenseMapping.h
// Created: Wed Mar 10 19:06:57 2021
//

#ifndef FBGEN_EntitlementsToLicenseMapping_H
#define FBGEN_EntitlementsToLicenseMapping_H

#include "GamePlatform.h"
#include "Array.h"
struct EntitlementsToLicenseMapping
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428802B0;
	}
	GamePlatform m_Platform; // 0x0
	unsigned char _0x4[0x4];
	Array<EntitlementsToLicense> m_EntitlementsToLicense; // 0x8
}; // size = 0x10

#endif // FBGEN_EntitlementsToLicenseMapping_H
