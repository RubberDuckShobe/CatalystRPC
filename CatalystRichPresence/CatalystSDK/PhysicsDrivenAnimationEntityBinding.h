//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsDrivenAnimationEntityBinding.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsDrivenAnimationEntityBinding_H
#define FBGEN_PhysicsDrivenAnimationEntityBinding_H

#include "AntRef.h"
struct PhysicsDrivenAnimationEntityBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809108;
	}
	AntRef m_PhysicsMotionTarget; // 0x0
	AntRef m_AimLeftRight; // 0x14
	AntRef m_AimUpDown; // 0x28
	AntRef m_Crouch; // 0x3c
	AntRef m_ForceSetTrajectory; // 0x50
	AntRef m_InAir; // 0x64
	AntRef m_Skydive; // 0x78
	AntRef m_Parachute; // 0x8c
	AntRef m_Swim; // 0xa0
	AntRef m_InputBackward; // 0xb4
	AntRef m_InputForward; // 0xc8
	AntRef m_InputLeft; // 0xdc
	AntRef m_InputRight; // 0xf0
	AntRef m_InputExclusiveBackward; // 0x104
	AntRef m_InputExclusiveForward; // 0x118
	AntRef m_InputExclusiveLeft; // 0x12c
	AntRef m_InputExclusiveRight; // 0x140
	AntRef m_IsEnemy; // 0x154
	AntRef m_Jump; // 0x168
	AntRef m_LeanLeftRight; // 0x17c
	AntRef m_Prone; // 0x190
	AntRef m_Sprint; // 0x1a4
	AntRef m_GroundSupported; // 0x1b8
	AntRef m_GroundNormal; // 0x1cc
	AntRef m_GroundDistance; // 0x1e0
	AntRef m_GroundAngleZ; // 0x1f4
	AntRef m_GroundAngleX; // 0x208
	AntRef m_GroundAngleFromNormal; // 0x21c
	AntRef m_IsClientAnimatable; // 0x230
	AntRef m_CustomizationScreen; // 0x244
	AntRef m_Minimal3pServer; // 0x258
	AntRef m_VerticalImpact; // 0x26c
	AntRef m_VerticalImpactSpeed; // 0x280
	AntRef m_FalseSignal; // 0x294
	AntRef m_LockArmsToCameraWeight; // 0x2a8
	AntRef m_WindDirection; // 0x2bc
	AntRef m_WindStrength; // 0x2d0
	AntRef m_WaterDepth; // 0x2e4
	AntRef m_EyeWaterDepth; // 0x2f8
}; // size = 0x30c

#endif // FBGEN_PhysicsDrivenAnimationEntityBinding_H
