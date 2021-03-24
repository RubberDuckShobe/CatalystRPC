//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsRagdollConstraintData.h
// Created: Wed Mar 10 19:03:08 2021
//

#ifndef FBGEN_PhysicsRagdollConstraintData_H
#define FBGEN_PhysicsRagdollConstraintData_H

#include "PhysicsConstraintData.h"

class PhysicsRagdollConstraintData :
	public PhysicsConstraintData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F110;
	}
	float m_TwistMinAngularLimit; // 0x80
	float m_TwistMaxAngularLimit; // 0x84
	float m_PlaneMinAngularLimit; // 0x88
	float m_PlaneMaxAngularLimit; // 0x8c
	float m_ConeAngularLimit; // 0x90
	float m_AngularFriction; // 0x94
	float m_AngularStiffness; // 0x98
	bool m_HasLimits; // 0x9c
	unsigned char _0x9d[0x3];
}; // size = 0xa0

#endif // FBGEN_PhysicsRagdollConstraintData_H
