//
// Generated with FrostbiteGen by Chod
// File: SDK\VehicleCameraData.h
// Created: Wed Mar 10 18:59:22 2021
//

#ifndef FBGEN_VehicleCameraData_H
#define FBGEN_VehicleCameraData_H

#include "Vec3.h"
#include "TargetCameraData.h"

class VehicleCameraData :
	public TargetCameraData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428175E0;
	}
	Vec3 m_MoveToPosition; // 0x70
	Vec3 m_MoveToPositionSlopeFactor; // 0x80
	Vec3 m_TargetOffset; // 0x90
	Vec3 m_TargetOffsetSlopeFactor; // 0xa0
	Vec3 m_RotationFactor; // 0xb0
	float m_PositionFactor; // 0xc0
	float m_ResetDistance; // 0xc4
	bool m_FixedPosition; // 0xc8
	bool m_FixedAngleZ; // 0xc9
	bool m_UseTerrainAdjustment; // 0xca
	unsigned char _0xcb[0x5];
}; // size = 0xd0

#endif // FBGEN_VehicleCameraData_H
