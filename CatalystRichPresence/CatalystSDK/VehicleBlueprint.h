//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleBlueprint.h
// Created: Wed Mar 10 18:59:22 2021
//

#ifndef FBGEN_VehicleBlueprint_H
#define FBGEN_VehicleBlueprint_H

#include "TimeDeltaType.h"
#include "ObjectBlueprint.h"

class VehicleBlueprint :
	public ObjectBlueprint // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428179A0;
	}
	TimeDeltaType m_TimeDeltaType; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_VehicleBlueprint_H
