//
// Generated with FrostbiteGen by Chod
// File: SDK\MaterialRelationVehicleData.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MaterialRelationVehicleData_H
#define FBGEN_MaterialRelationVehicleData_H

#include "EffectBlueprint.h"
#include "PhysicsMaterialRelationPropertyData.h"

class MaterialRelationVehicleData :
	public PhysicsMaterialRelationPropertyData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A490;
	}
	EffectBlueprint* m_ChassiEffect; // 0x10
	EffectBlueprint* m_TrackEffect; // 0x18
	EffectBlueprint* m_WheelEffect; // 0x20
	EffectBlueprint* m_GroundEffect; // 0x28
}; // size = 0x30

#endif // FBGEN_MaterialRelationVehicleData_H
