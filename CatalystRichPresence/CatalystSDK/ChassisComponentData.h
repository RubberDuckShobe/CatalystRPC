//
// Generated with FrostbiteGen by Chod
// File: SDK\ChassisComponentData.h
// Created: Wed Mar 10 19:08:14 2021
//

#ifndef FBGEN_ChassisComponentData_H
#define FBGEN_ChassisComponentData_H

#include "VehicleConfigData.h"
#include "GearboxConfigData.h"
#include "CameraRelativeControlData.h"
#include "LandingGearLogicData.h"
#include "Array.h"
#include "PartComponentData.h"

class ChassisComponentData :
	public PartComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E030;
	}
	VehicleConfigData* m_VehicleConfig; // 0x90
	GearboxConfigData* m_GearboxConfig; // 0x98
	CameraRelativeControlData* m_CameraRelativeControlConfig; // 0xa0
	Array<VehicleWaterEffectData*> m_WaterEffects; // 0xa8
	Array<VehicleWaterEffectData*> m_WaterStreakEffects; // 0xb0
	float m_TriggerGroundEffectImpulse; // 0xb8
	float m_TriggerGroundEffectHeight; // 0xbc
	float m_GroundEffectFadeParam; // 0xc0
	unsigned char _0xc4[0x4];
	LandingGearLogicData* m_LandingGearLogic; // 0xc8
	Array<OnImpulseModifierData> m_OnImpulseModifiers; // 0xd0
	bool m_AlwaysFullThrottle; // 0xd8
	bool m_GroundEffectOnTerrainOnly; // 0xd9
	bool m_AllowNegativeThrottle; // 0xda
	unsigned char _0xdb[0x5];
}; // size = 0xe0

#endif // FBGEN_ChassisComponentData_H
