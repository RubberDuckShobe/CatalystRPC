//
// Generated with FrostbiteGen by Chod
// File: SDK\HullFloatPhysicsData.h
// Created: Wed Mar 10 19:06:33 2021
//

#ifndef FBGEN_HullFloatPhysicsData_H
#define FBGEN_HullFloatPhysicsData_H

#include "Vec3.h"
#include "FloatPhysicsData.h"

class HullFloatPhysicsData :
	public FloatPhysicsData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C020;
	}
	unsigned char _0x18[0x8];
	Vec3 m_WaterResistanceAxisMod; // 0x20
	Vec3 m_WaterFrictionAxisMod; // 0x30
	Vec3 m_Offset; // 0x40
	int m_SubSurfaceSplits; // 0x50
	float m_Depth; // 0x54
	float m_Width; // 0x58
	float m_Length; // 0x5c
	float m_FrontCurveDegree; // 0x60
	float m_SideCurveDegree; // 0x64
	float m_NonEngineSteer; // 0x68
	float m_NonEngineSteerMinSpeed; // 0x6c
	float m_NonEngineSteerMaxSpeed; // 0x70
	float m_WaterDampeningMod; // 0x74
	float m_LiftModifier; // 0x78
	float m_SupportSizeMod; // 0x7c
	float m_SampleHeightModifier; // 0x80
	float m_AngularDampening; // 0x84
	float m_FrictionThrottleModifier; // 0x88
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_HullFloatPhysicsData_H
