//
// Generated with FrostbiteGen by Chod
// File: SDK\PropellerEngineConfigData.h
// Created: Wed Mar 10 19:02:51 2021
//

#ifndef FBGEN_PropellerEngineConfigData_H
#define FBGEN_PropellerEngineConfigData_H

#include "Vec3.h"
#include "PropellerType.h"
#include "RotorParameters.h"
#include "ForceMagnitudeInputType.h"
#include "EngineConfigData.h"

class PropellerEngineConfigData :
	public EngineConfigData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C9E0;
	}
	Vec3 m_HorisontalForceOffset; // 0x70
	PropellerType m_PropellerType; // 0x80
	unsigned char _0x84[0x4];
	RotorParameters* m_RotorConfig; // 0x88
	ForceMagnitudeInputType m_ForceMagnitudeInputType; // 0x90
	unsigned int m_DirectionVectorIndex; // 0x94
	float m_ForceMagnitudeMultiplier; // 0x98
	float m_LiftForceSpringConstant; // 0x9c
	float m_LiftForceDampingConstant; // 0xa0
	float m_CyclicInputScaleRoll; // 0xa4
	float m_CyclicRollLiftMod; // 0xa8
	float m_CyclicRollStrafeMod; // 0xac
	float m_CyclicInputScalePitch; // 0xb0
	float m_CyclicPitchLiftMod; // 0xb4
	float m_CyclicPitchStrafeMod; // 0xb8
	float m_CyclicPitchStrafeBrakeMod; // 0xbc
	float m_CollectiveInputIdle; // 0xc0
	float m_CollectiveThrottleInputScale; // 0xc4
	float m_CollectiveBrakeInputScale; // 0xc8
	float m_DefaultAngleOfAttack; // 0xcc
	float m_AttackAngleMod; // 0xd0
	float m_StabilizerMod; // 0xd4
	float m_HorisontalMinEffectVelocity; // 0xd8
	float m_HorisontalMinEffectMod; // 0xdc
	ForceMagnitudeInputType m_SPForwardInput; // 0xe0
	ForceMagnitudeInputType m_SPSidewaysInput; // 0xe4
	ForceMagnitudeInputType m_SPVerticalInput; // 0xe8
	ForceMagnitudeInputType m_SPPitchInput; // 0xec
	ForceMagnitudeInputType m_SPYawInput; // 0xf0
	float m_SPForwardStrength; // 0xf4
	float m_SPSidewaysStrength; // 0xf8
	float m_SPVerticalStrength; // 0xfc
	float m_SPReverseForceMod; // 0x100
	float m_PitchStrength; // 0x104
	float m_PitchLimit; // 0x108
	float m_PitchFromVel; // 0x10c
	float m_VelocityFromPitch; // 0x110
	float m_RollStrength; // 0x114
	float m_BankingStrength; // 0x118
	float m_BankingLimit; // 0x11c
	float m_PitchUpWhenBankStrength; // 0x120
	float m_PitchUpWhenBankLimit; // 0x124
	float m_GravityMod; // 0x128
	bool m_ApplyForceAsTorque; // 0x12c
	bool m_EnableNewHelicopter; // 0x12d
	bool m_SPAllowed; // 0x12e
	bool m_SPDefault; // 0x12f
}; // size = 0x130

#endif // FBGEN_PropellerEngineConfigData_H
