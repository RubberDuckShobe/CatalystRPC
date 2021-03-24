//
// Generated with FrostbiteGen by Chod
// File: SDK\BasicUnlockInfo.h
// Created: Wed Mar 10 19:08:31 2021
//

#ifndef FBGEN_BasicUnlockInfo_H
#define FBGEN_BasicUnlockInfo_H

#include "Guid.h"
#include "Array.h"
struct BasicUnlockInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DBA8;
	}
	Guid m_UnlockGuid; // 0x0
	unsigned int m_Identifier; // 0x10
	unsigned int m_SubCategoryIdentifier; // 0x14
	unsigned int m_UnlockScore; // 0x18
	unsigned char _0x1c[0x4];
	Array<const char*> m_Licenses; // 0x20
	unsigned int m_PurchasePrice; // 0x28
	unsigned char _0x2c[0x4];
	Array<unsigned int> m_PurchaseGates; // 0x30
	Array<const char*> m_AdditionalLicenses; // 0x38
	const char* m_StringId; // 0x40
}; // size = 0x48

#endif // FBGEN_BasicUnlockInfo_H
