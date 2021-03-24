//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalLightEntityData.h
// Created: Wed Mar 10 19:06:12 2021
//

#ifndef FBGEN_LocalLightEntityData_H
#define FBGEN_LocalLightEntityData_H

#include "SpatialEntityData.h"

class LocalLightEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428421F0;
	}
	bool m_Enabled; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_LocalLightEntityData_H
