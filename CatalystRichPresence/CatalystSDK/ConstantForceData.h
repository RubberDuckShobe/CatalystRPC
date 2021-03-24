//
// Generated with FrostbiteGen by Chod
// File: SDK\ConstantForceData.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ConstantForceData_H
#define FBGEN_ConstantForceData_H

#include "Vec3.h"
#include "ForceCondition.h"
#include "ForceType.h"
#include "SpaceType.h"
struct ConstantForceData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BEF8;
	}
	Vec3 m_Value; // 0x0
	ForceCondition m_Condition; // 0x10
	ForceType m_TypeOfForce; // 0x14
	SpaceType m_Space; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_ConstantForceData_H
