//
// Generated with FrostbiteGen by Chod
// File: SDK\ChildComponentData.h
// Created: Wed Mar 10 19:08:14 2021
//

#ifndef FBGEN_ChildComponentData_H
#define FBGEN_ChildComponentData_H

#include "LinearTransform.h"
#include "SoundAsset.h"
#include "MovingBodyData.h"
#include "VehicleHealthZoneData.h"
#include "AlignmentData.h"
#include "BoneComponentData.h"

class ChildComponentData :
	public BoneComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E690;
	}
	LinearTransform m_AlignTransform; // 0x70
	SoundAsset* m_SoundEffect; // 0xb0
	MovingBodyData* m_MovingBody; // 0xb8
	VehicleHealthZoneData m_HealthZone; // 0xc0
	float m_SoundEffectStartRpm; // 0xe0
	float m_SoundEffectStopRpm; // 0xe4
	AlignmentData* m_AlignmentSettings; // 0xe8
	bool m_WorldSpacePositionLock; // 0xf0
	bool m_EnableAlignToCamera; // 0xf1
	unsigned char _0xf2[0xe];
}; // size = 0x100

#endif // FBGEN_ChildComponentData_H
