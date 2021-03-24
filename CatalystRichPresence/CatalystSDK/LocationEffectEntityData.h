//
// Generated with FrostbiteGen by Chod
// File: SDK\LocationEffectEntityData.h
// Created: Wed Mar 10 19:06:08 2021
//

#ifndef FBGEN_LocationEffectEntityData_H
#define FBGEN_LocationEffectEntityData_H

#include "LocationType.h"
#include "ChildEffectEntityData.h"

class LocationEffectEntityData :
	public ChildEffectEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7820;
	}
	LocationType m_Location; // 0xa0
	unsigned int m_CtrlPointIndex; // 0xa4
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_LocationEffectEntityData_H
