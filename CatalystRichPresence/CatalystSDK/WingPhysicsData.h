//
// Generated with FrostbiteGen by Chod
// File: SDK\WingPhysicsData.h
// Created: Wed Mar 10 18:58:45 2021
//

#ifndef FBGEN_WingPhysicsData_H
#define FBGEN_WingPhysicsData_H

#include "Curve2D.h"
#include "LandingFlapData.h"
#include "DataContainer.h"

class WingPhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CCE0;
	}
	float m_Lift; // 0x10
	float m_FlapLift; // 0x14
	Curve2D* m_LiftCoefficient; // 0x18
	float m_Drag; // 0x20
	float m_FlapDrag; // 0x24
	Curve2D* m_DragCoefficient; // 0x28
	float m_AngularVelocityLiftModifier; // 0x30
	float m_DragRotationModifier; // 0x34
	float m_BaseAngleOfAttack; // 0x38
	int m_InputForFlap; // 0x3c
	float m_FlapTurnSpeed; // 0x40
	float m_VisualFlapTurnSpeed; // 0x44
	float m_VisualFlapAngleLimit; // 0x48
	unsigned char _0x4c[0x4];
	Curve2D* m_MaxFlapAngleScaleFactor; // 0x50
	float m_LandingFlapLift; // 0x58
	unsigned char _0x5c[0x4];
	LandingFlapData* m_LandingFlapLogic; // 0x60
}; // size = 0x68

#endif // FBGEN_WingPhysicsData_H
