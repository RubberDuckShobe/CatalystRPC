//
// Generated with FrostbiteGen by Chod
// File: SDK\RadiosityModifierEntityData.h
// Created: Wed Mar 10 19:02:46 2021
//

#ifndef FBGEN_RadiosityModifierEntityData_H
#define FBGEN_RadiosityModifierEntityData_H

#include "SpatialEntityData.h"

class RadiosityModifierEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428423D0;
	}
	float m_BounceScale; // 0x60
	float m_SunScale; // 0x64
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_RadiosityModifierEntityData_H
