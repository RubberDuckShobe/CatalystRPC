//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomJumpOrFallEntityData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomJumpOrFallEntityData_H
#define FBGEN_PamCustomJumpOrFallEntityData_H

#include "Vec3.h"
#include "LinearTransform.h"
#include "PamCustomJumpOrFallTargetType.h"
#include "PamFindableMovementVolumeEntityData.h"

class PamCustomJumpOrFallEntityData :
	public PamFindableMovementVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884F20;
	}
	Vec3 m_PointA; // 0xa0
	Vec3 m_PointB; // 0xb0
	LinearTransform m_TriggerTransform; // 0xc0
	float m_Radius; // 0x100
	PamCustomJumpOrFallTargetType m_TargetType; // 0x104
	unsigned char _0x108[0x8];
}; // size = 0x110

#endif // FBGEN_PamCustomJumpOrFallEntityData_H
