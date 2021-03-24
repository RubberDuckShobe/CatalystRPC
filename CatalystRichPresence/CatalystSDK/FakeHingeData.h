//
// Generated with FrostbiteGen by Chod
// File: SDK\FakeHingeData.h
// Created: Wed Mar 10 19:06:49 2021
//

#ifndef FBGEN_FakeHingeData_H
#define FBGEN_FakeHingeData_H

#include "Vec3.h"
#include "FakePhysicsData.h"

class FakeHingeData :
	public FakePhysicsData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D1C0;
	}
	float m_MinAngle; // 0x38
	float m_MaxAngle; // 0x3c
	Vec3 m_Pivot; // 0x40
	Vec3 m_RotationAxis; // 0x50
	Vec3 m_ExtensionAxis; // 0x60
	float m_AngularDampening; // 0x70
	float m_PullbackAcceleration; // 0x74
	float m_ProgressiveExponent; // 0x78
	float m_InertiaModifier; // 0x7c
}; // size = 0x80

#endif // FBGEN_FakeHingeData_H
