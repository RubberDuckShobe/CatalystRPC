//
// Generated with FrostbiteGen by Chod
// File: SDK\CheckedLocalizedStringEntityData.h
// Created: Wed Mar 10 19:08:14 2021
//

#ifndef FBGEN_CheckedLocalizedStringEntityData_H
#define FBGEN_CheckedLocalizedStringEntityData_H

#include "LocalizedStringId.h"
#include "LocalizedStringEntityBaseData.h"

class CheckedLocalizedStringEntityData :
	public LocalizedStringEntityBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C1A20;
	}
	LocalizedStringId m_DynamicStringId; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_DebugString; // 0x30
	const char* m_Sid; // 0x38
}; // size = 0x40

#endif // FBGEN_CheckedLocalizedStringEntityData_H
