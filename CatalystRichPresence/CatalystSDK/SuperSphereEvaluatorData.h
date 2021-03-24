//
// Generated with FrostbiteGen by Chod
// File: SDK\SuperSphereEvaluatorData.h
// Created: Wed Mar 10 19:00:41 2021
//

#ifndef FBGEN_SuperSphereEvaluatorData_H
#define FBGEN_SuperSphereEvaluatorData_H

#include "Vec3.h"
#include "EvaluatorData.h"

class SuperSphereEvaluatorData :
	public EvaluatorData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DC500;
	}
	float m_InnerRadius; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_Scale; // 0x20
	Vec3 m_Pivot; // 0x30
	float m_OuterRadius; // 0x40
	float m_StartZenithAngle; // 0x44
	float m_EndZenithAngle; // 0x48
	float m_InnerRadiusBound; // 0x4c
	float m_StartZenithAngleBound; // 0x50
	float m_EndZenithAngleBound; // 0x54
	float m_StartAzimuthAngle; // 0x58
	float m_EndAzimuthAngle; // 0x5c
	float m_DistributionAlongRadius; // 0x60
	bool m_OrientAlongZ; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_SuperSphereEvaluatorData_H
