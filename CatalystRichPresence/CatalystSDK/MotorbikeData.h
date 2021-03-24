//
// Generated with FrostbiteGen by Chod
// File: SDK\MotorbikeData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MotorbikeData_H
#define FBGEN_MotorbikeData_H

#include "Vec3.h"
#include "DataContainer.h"

class MotorbikeData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CF20;
	}
	float m_MaxLeaningRoll; // 0x10
	float m_CounterLeanForce; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_DampBigJumpImpactCounterForce; // 0x20
	Vec3 m_WheelieForce; // 0x30
	Vec3 m_WheelieForceBodyOffset; // 0x40
	float m_StandStillLeanForce; // 0x50
	float m_LeanForce; // 0x54
	float m_JumpForwardLeanMinAngle; // 0x58
	float m_JumpForwardLeanMomentum; // 0x5c
	float m_JumpForwardLeanMinNoContactTime; // 0x60
	float m_LeanForceMaxVel; // 0x64
	float m_KickstandRoll; // 0x68
	float m_KickstandLinearDamping; // 0x6c
	float m_StandStillRoll; // 0x70
	float m_DampBigJumpImpactVelocity; // 0x74
	float m_DampBigJumpMaxSpringForceFraction; // 0x78
	float m_DampBigJumpImpactVerticalVelocity; // 0x7c
	float m_YawBrakeDampingLerpStartScale; // 0x80
	float m_YawBrakeDampingLerpEndScale; // 0x84
	float m_StoppieActivationVelocity; // 0x88
	float m_StoppieStartVelocity; // 0x8c
	float m_StoppieStopVelocity; // 0x90
	float m_StoppieMomentum; // 0x94
	float m_ShortOffgroundGravityMultiplier; // 0x98
	float m_ShortOffgroundPeriod; // 0x9c
	float m_WheelieSwitchOffNoContactTime; // 0xa0
	float m_WheelieMaxNoDownForceContactTime; // 0xa4
	float m_WheelieMaxNoContactTime; // 0xa8
	float m_WheelieSteeringFactor; // 0xac
	float m_WheelieInertia; // 0xb0
	float m_WheelieStartVelocity; // 0xb4
	float m_WheelieMaxVelocityUndamped; // 0xb8
	float m_WheelieMaxVelocityDampRange; // 0xbc
	float m_WheelieOutAngularMomentum; // 0xc0
	float m_WheelieSpringDamping; // 0xc4
	float m_WheelieSpringKScale; // 0xc8
	float m_WheelieAngularDamping; // 0xcc
	float m_WheelieAngularDampingSpeed; // 0xd0
	float m_WheelieMaxAngle; // 0xd4
	float m_WheelieMaxVelocity; // 0xd8
	float m_WheelieVelocityForceScale; // 0xdc
	float m_WheelieAngularStartMomentum; // 0xe0
	bool m_DampBigJumpImpact; // 0xe4
	unsigned char _0xe5[0xb];
}; // size = 0xf0

#endif // FBGEN_MotorbikeData_H
