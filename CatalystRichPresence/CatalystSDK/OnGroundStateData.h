//
// Generated with FrostbiteGen by Chod
// File: SDK\OnGroundStateData.h
// Created: Wed Mar 10 19:05:29 2021
//

#ifndef FBGEN_OnGroundStateData_H
#define FBGEN_OnGroundStateData_H

#include "CharacterStateData.h"

class OnGroundStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C380;
	}
	float m_JumpDelay; // 0x18
	float m_JumpStaminaPenalty; // 0x1c
	float m_AllowedDistanceFromGround; // 0x20
	float m_FallWithGravityDistanceFromGround; // 0x24
	float m_ClampSurfaceNormalAngle; // 0x28
	float m_UphillSpeedModifier; // 0x2c
	float m_UphillSpeedModifierMaxAngle; // 0x30
	float m_DownhillSpeedModifier; // 0x34
	float m_DownhillSpeedModifierMaxAngle; // 0x38
	float m_HillSpeedModifierDeadZone; // 0x3c
	float m_CharacterSpringScaleMovingUnderTerrain; // 0x40
	float m_CharacterSpringScaleMovingOverTerrain; // 0x44
	float m_CharacterSpringScaleStill; // 0x48
	bool m_GroundHugging; // 0x4c
	bool m_LimitDownwardVelocity; // 0x4d
	unsigned char _0x4e[0x2];
}; // size = 0x50

#endif // FBGEN_OnGroundStateData_H
