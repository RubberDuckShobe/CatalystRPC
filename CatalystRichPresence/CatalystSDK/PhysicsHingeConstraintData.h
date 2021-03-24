//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsHingeConstraintData.h
// Created: Wed Mar 10 19:03:09 2021
//

#ifndef FBGEN_PhysicsHingeConstraintData_H
#define FBGEN_PhysicsHingeConstraintData_H

#include "PhysicsConstraintData.h"

class PhysicsHingeConstraintData :
	public PhysicsConstraintData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F170;
	}
	float m_MinAngle; // 0x80
	float m_MaxAngle; // 0x84
	float m_AngularFriction; // 0x88
	float m_AngularStiffness; // 0x8c
	bool m_HasLimits; // 0x90
	unsigned char _0x91[0xf];
}; // size = 0xa0

#endif // FBGEN_PhysicsHingeConstraintData_H
