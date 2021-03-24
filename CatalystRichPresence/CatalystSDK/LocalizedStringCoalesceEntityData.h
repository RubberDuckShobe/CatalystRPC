//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalizedStringCoalesceEntityData.h
// Created: Wed Mar 10 19:06:09 2021
//

#ifndef FBGEN_LocalizedStringCoalesceEntityData_H
#define FBGEN_LocalizedStringCoalesceEntityData_H

#include "EntityData.h"

class LocalizedStringCoalesceEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C19C0;
	}
	int m_InputCount; // 0x18
	bool m_TreadEmptyStringAsNull; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_LocalizedStringCoalesceEntityData_H
