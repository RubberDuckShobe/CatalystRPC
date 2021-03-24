//
// Generated with FrostbiteGen by Chod
// File: SDK\HovercraftFloatPhysicsData.h
// Created: Wed Mar 10 19:06:34 2021
//

#ifndef FBGEN_HovercraftFloatPhysicsData_H
#define FBGEN_HovercraftFloatPhysicsData_H

#include "Vec3.h"
#include "HullFloatPhysicsData.h"

class HovercraftFloatPhysicsData :
	public HullFloatPhysicsData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282BFC0;
	}
	Vec3 m_LandResistanceAxisMod; // 0x90
	Vec3 m_LandFrictionAxisMod; // 0xa0
	Vec3 m_LandFrictionAxisModEngineOff; // 0xb0
	float m_FrontLength; // 0xc0
	float m_SideLength; // 0xc4
	float m_LiftModifierEngineOff; // 0xc8
	float m_EngineTransitionTime; // 0xcc
}; // size = 0xd0

#endif // FBGEN_HovercraftFloatPhysicsData_H
