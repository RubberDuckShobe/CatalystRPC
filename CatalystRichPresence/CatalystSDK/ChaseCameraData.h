//
// Generated with FrostbiteGen by Chod
// File: SDK\ChaseCameraData.h
// Created: Wed Mar 10 19:08:14 2021
//

#ifndef FBGEN_ChaseCameraData_H
#define FBGEN_ChaseCameraData_H

#include "Vec3.h"
#include "TargetCameraData.h"

class ChaseCameraData :
	public TargetCameraData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142817700;
	}
	Vec3 m_TargetOffset; // 0x70
	Vec3 m_ToWantedPositionScale; // 0x80
	float m_TargetRotationOffset; // 0x90
	float m_MaxViewRotationAngleDeg; // 0x94
	float m_WantedAngleDeg; // 0x98
	float m_WantedDistance; // 0x9c
	float m_MaxDistance; // 0xa0
	float m_SnapDistance; // 0xa4
	float m_ResetDistance; // 0xa8
	float m_ForceFieldRadius; // 0xac
	float m_CollisionRadius; // 0xb0
	float m_ForceFieldForceScale; // 0xb4
	float m_AwayFromTargetForceScale; // 0xb8
	float m_VelocityDrag; // 0xbc
	float m_MaxVelocity; // 0xc0
	float m_PillMinimumCollisionRadius; // 0xc4
	float m_PillMaximumCollisionRadius; // 0xc8
	float m_PillMinimumCollisionLength; // 0xcc
	float m_PillExpandSizeSpeedAcceleration; // 0xd0
	float m_LookDistanceScale; // 0xd4
	float m_LookDistanceInFrontOfTarget; // 0xd8
	unsigned char _0xdc[0x4];
	const char* m_RollWithTargetOptionControl; // 0xe0
	unsigned int m_UpdateRate; // 0xe8
	bool m_KeepTargetPitch; // 0xec
	bool m_ShouldRollWithTarget; // 0xed
	bool m_InheritTargetVelocity; // 0xee
	bool m_BypassChaseCalculations; // 0xef
	bool m_BypassChaseCalculationsX; // 0xf0
	bool m_BypassChaseCalculationsY; // 0xf1
	bool m_BypassChaseCalculationsZ; // 0xf2
	bool m_AltBypassChaseCalculationsX; // 0xf3
	bool m_AltBypassChaseCalculationsY; // 0xf4
	bool m_AltBypassChaseCalculationsZ; // 0xf5
	bool m_HasCollisionAgainstTarget; // 0xf6
	bool m_IgnoreCollisionInChaseCalculations; // 0xf7
	bool m_HasCollision; // 0xf8
	unsigned char _0xf9[0x7];
}; // size = 0x100

#endif // FBGEN_ChaseCameraData_H
