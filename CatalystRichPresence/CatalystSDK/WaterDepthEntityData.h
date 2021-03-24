//
// Generated with FrostbiteGen by Chod
// File: SDK\WaterDepthEntityData.h
// Created: Wed Mar 10 18:58:53 2021
//

#ifndef FBGEN_WaterDepthEntityData_H
#define FBGEN_WaterDepthEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class WaterDepthEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A370;
	}
	Realm m_Realm; // 0x60
	bool m_DefaultEnabled; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_WaterDepthEntityData_H
