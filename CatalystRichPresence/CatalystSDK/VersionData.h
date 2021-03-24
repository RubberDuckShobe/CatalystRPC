//
// Generated with FrostbiteGen by Chod
// File: SDK\VersionData.h
// Created: Wed Mar 10 18:59:16 2021
//

#ifndef FBGEN_VersionData_H
#define FBGEN_VersionData_H

#include "Asset.h"

class VersionData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142822140;
	}
	const char* m_disclaimer; // 0x18
	int m_Version; // 0x20
	unsigned char _0x24[0x4];
	const char* m_DateTime; // 0x28
	const char* m_BranchId; // 0x30
	const char* m_GameName; // 0x38
}; // size = 0x40

#endif // FBGEN_VersionData_H
