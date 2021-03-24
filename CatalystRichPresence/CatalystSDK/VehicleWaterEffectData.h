//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleWaterEffectData.h
// Created: Wed Mar 10 18:59:17 2021
//

#ifndef FBGEN_VehicleWaterEffectData_H
#define FBGEN_VehicleWaterEffectData_H

#include "EffectBlueprint.h"
#include "Vec3.h"
#include "DataContainer.h"

class VehicleWaterEffectData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E150;
	}
	EffectBlueprint* m_Effect; // 0x10
	unsigned char _0x18[0x8];
	Vec3 m_Position; // 0x20
}; // size = 0x30

#endif // FBGEN_VehicleWaterEffectData_H
