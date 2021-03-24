//
// Generated with FrostbiteGen by Chod
// File: SDK\StumbleMap.h
// Created: Wed Mar 10 19:00:48 2021
//

#ifndef FBGEN_StumbleMap_H
#define FBGEN_StumbleMap_H

#include "Array.h"
#include "DataContainer.h"

class StumbleMap :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E590;
	}
	int m_StumbleType; // 0x10
	unsigned char _0x14[0x4];
	Array<DamageTypeItem> m_DamageTypes; // 0x18
}; // size = 0x20

#endif // FBGEN_StumbleMap_H
