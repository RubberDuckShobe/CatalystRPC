//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerEntryComponentData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerEntryComponentData_H
#define FBGEN_PlayerEntryComponentData_H

#include "Vec3.h"
#include "AntEntryIdEnum.h"
#include "AntEnumeration.h"
#include "EntryComponentData.h"

class PlayerEntryComponentData :
	public EntryComponentData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816920;
	}
	Vec3 m_AnimationAccelerationMultiplier; // 0xf0
	const char* m_AntEntryID; // 0x100
	AntEntryIdEnum m_AntEntryId; // 0x108
	unsigned char _0x10c[0x4];
	AntEnumeration* m_AntEntryEnumeration; // 0x110
	unsigned char _0x118[0x8];
}; // size = 0x120

#endif // FBGEN_PlayerEntryComponentData_H
