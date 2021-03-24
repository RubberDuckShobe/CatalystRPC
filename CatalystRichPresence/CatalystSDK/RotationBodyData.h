//
// Generated with FrostbiteGen by Chod
// File: SDK\RotationBodyData.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RotationBodyData_H
#define FBGEN_RotationBodyData_H

#include "ExtendedConstraintsData.h"
#include "MovingBodyData.h"

class RotationBodyData :
	public MovingBodyData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C6E0;
	}
	float m_AngularMomentumMultiplier; // 0x18
	float m_AngularMomentumThreshold; // 0x1c
	float m_AngularMomentumDamping; // 0x20
	float m_AngularMomentumDampingAcc; // 0x24
	float m_AngularMomentumDampingDeacc; // 0x28
	float m_AngularConstraintMin; // 0x2c
	float m_AngularConstraintMax; // 0x30
	int m_RotationAxis; // 0x34
	ExtendedConstraintsData* m_ExtendedConstraints; // 0x38
	bool m_UsePostSatisfyConstraints; // 0x40
	bool m_UseAngularMomentumThreshold; // 0x41
	bool m_UseAngularMomentumDamping; // 0x42
	bool m_UseAngularConstraint; // 0x43
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_RotationBodyData_H
