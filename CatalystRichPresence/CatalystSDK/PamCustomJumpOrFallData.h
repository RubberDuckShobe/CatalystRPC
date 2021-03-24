//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCustomJumpOrFallData.h
// Created: Wed Mar 10 19:04:43 2021
//

#ifndef FBGEN_PamCustomJumpOrFallData_H
#define FBGEN_PamCustomJumpOrFallData_H

#include "Vec3.h"
#include "LinearTransform.h"
#include "PamCustomJumpOrFallTargetType.h"
#include "PamFindableMovementVolumeData.h"

class PamCustomJumpOrFallData :
	public PamFindableMovementVolumeData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884F80;
	}
	Vec3 m_PointA; // 0x80
	Vec3 m_PointB; // 0x90
	LinearTransform m_TriggerTransform; // 0xa0
	float m_Radius; // 0xe0
	PamCustomJumpOrFallTargetType m_TargetType; // 0xe4
	unsigned char _0xe8[0x8];
}; // size = 0xf0

#endif // FBGEN_PamCustomJumpOrFallData_H
