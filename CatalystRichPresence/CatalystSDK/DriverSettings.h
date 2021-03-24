//
// Generated with FrostbiteGen by Chod
// File: SDK\DriverSettings.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DriverSettings_H
#define FBGEN_DriverSettings_H

#include "RegulatedSteering.h"
#include "Asset.h"

class DriverSettings :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428113A0;
	}
	float m_MinRadius; // 0x18
	float m_RadiusGrowthSpeed; // 0x1c
	float m_StoppingDeceleration; // 0x20
	float m_SteeringSensitivity; // 0x24
	RegulatedSteering* m_RegulatedSteering; // 0x28
	float m_MaxBrakeOutput; // 0x30
	float m_LookAheadTime; // 0x34
	float m_AngleDiffForNoSlowdown; // 0x38
	float m_AngleDiffForFullSlowdown; // 0x3c
	float m_VelocityAtFullSlowdown; // 0x40
	float m_VelDiffAtMinAcc; // 0x44
	float m_VelDiffAtMaxAcc; // 0x48
	float m_MinAcc; // 0x4c
	float m_MaxAcc; // 0x50
	float m_VelDiffAtMinDec; // 0x54
	float m_VelDiffAtMaxDec; // 0x58
	float m_MinDec; // 0x5c
	float m_MaxDec; // 0x60
	float m_AccDiffAtMinThrottleVelocityAccelerating; // 0x64
	float m_AccDiffAtMaxThrottleVelocityAccelerating; // 0x68
	float m_MinThrottleVelocityAccelerating; // 0x6c
	float m_MaxThrottleVelocityAccelerating; // 0x70
	float m_AccDiffAtMinThrottleVelocityDecelerating; // 0x74
	float m_AccDiffAtMaxThrottleVelocityDecelerating; // 0x78
	float m_MinThrottleVelocityDecelerating; // 0x7c
	float m_MaxThrottleVelocityDecelerating; // 0x80
	float m_P; // 0x84
	float m_I; // 0x88
	float m_D; // 0x8c
	float m_MaxError; // 0x90
	float m_MaxSumError; // 0x94
	float m_MaxPTerm; // 0x98
	float m_MaxITerm; // 0x9c
	float m_MaxYawToApplySprint; // 0xa0
	float m_MaxAngleDiffToApplySprint; // 0xa4
	float m_MaxAngularVelocityToApplySprint; // 0xa8
	float m_MinVelocityToApplySprint; // 0xac
	float m_LookAheadAimTime; // 0xb0
	float m_MinLookAheadDist; // 0xb4
	bool m_SquareBrakeOutput; // 0xb8
	bool m_UseSquareVelDiffCurveAcc; // 0xb9
	bool m_UseSquareVelDiffCurveDec; // 0xba
	bool m_UseSquareAccDiffCurveAcc; // 0xbb
	bool m_UseSquareAccDiffCurveDec; // 0xbc
	bool m_UsePIDRegulator; // 0xbd
	bool m_IncludeYDifference; // 0xbe
	unsigned char _0xbf[0x1];
}; // size = 0xc0

#endif // FBGEN_DriverSettings_H
