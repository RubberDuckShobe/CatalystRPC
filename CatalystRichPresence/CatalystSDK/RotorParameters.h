//
// Generated with FrostbiteGen by Chod
// File: SDK\RotorParameters.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RotorParameters_H
#define FBGEN_RotorParameters_H

#include "Array.h"
#include "DataContainer.h"

class RotorParameters :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CA40;
	}
	float m_CyclicInputScaleRoll; // 0x10
	float m_CyclicInputScalePitch; // 0x14
	float m_CollectiveThrottleInputScale; // 0x18
	float m_CollectiveBrakeInputScale; // 0x1c
	float m_CollectiveInputIdle; // 0x20
	float m_HorizontalForceModifier; // 0x24
	Array<Vec2> m_AngleOfAttack; // 0x28
	float m_CyclicFadeOutOffset; // 0x30
	float m_AdditionalGravityModifier; // 0x34
	float m_HorisontalMinEffectVelocity; // 0x38
	float m_HorisontalMinEffectMod; // 0x3c
	bool m_ReverseThrottle; // 0x40
	bool m_EnableHorisontalMinEffect; // 0x41
	unsigned char _0x42[0x6];
}; // size = 0x48

#endif // FBGEN_RotorParameters_H
