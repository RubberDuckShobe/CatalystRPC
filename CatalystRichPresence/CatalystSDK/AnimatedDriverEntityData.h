//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimatedDriverEntityData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimatedDriverEntityData_H
#define FBGEN_AnimatedDriverEntityData_H

#include "LinearTransform.h"
#include "AntRef.h"
#include "NormalizeSettings.h"
#include "EntityData.h"

class AnimatedDriverEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281DDF0;
	}
	AntRef m_VehicleSpeed; // 0x18
	unsigned char _0x2c[0x4];
	LinearTransform m_InputTransform; // 0x30
	AntRef m_VehicleMovementState; // 0x70
	AntRef m_VehicleBoost; // 0x84
	AntRef m_VehicleBrake; // 0x98
	float m_MovementStateStandThreshold; // 0xac
	NormalizeSettings m_Yaw; // 0xb0
	NormalizeSettings m_Pitch; // 0xc8
	NormalizeSettings m_Roll; // 0xe0
	bool m_DelayAnimationWheelTransform; // 0xf8
	unsigned char _0xf9[0x7];
}; // size = 0x100

#endif // FBGEN_AnimatedDriverEntityData_H
