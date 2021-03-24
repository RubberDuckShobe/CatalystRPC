//
// Generated with FrostbiteGen by Chod
// File: SDK\JetEngineConfigData.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JetEngineConfigData_H
#define FBGEN_JetEngineConfigData_H

#include "Array.h"
#include "Vec2.h"
#include "EngineConfigData.h"

class JetEngineConfigData :
	public EngineConfigData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C980;
	}
	unsigned int m_DirectionVectorIndex; // 0x70
	float m_ForceMagnitudeMultiplier; // 0x74
	float m_AngleInputYMultiplier; // 0x78
	float m_AngleInputPitchMultiplier; // 0x7c
	float m_PitchForceModifier; // 0x80
	float m_MaxVelocity; // 0x84
	float m_OutOfWaterContactThresholdTime; // 0x88
	float m_OutOfWaterContactRampDownTime; // 0x8c
	Array<SensitivityAtVelocity> m_SteeringSensitivity; // 0x90
	Vec2 m_PowerFadeOutRange; // 0x98
	bool m_IsTurnable; // 0xa0
	bool m_IsWaterJetEngine; // 0xa1
	bool m_UseForcePositionWaterTest; // 0xa2
	bool m_UseHullInWaterTest; // 0xa3
	unsigned char _0xa4[0xc];
}; // size = 0xb0

#endif // FBGEN_JetEngineConfigData_H
