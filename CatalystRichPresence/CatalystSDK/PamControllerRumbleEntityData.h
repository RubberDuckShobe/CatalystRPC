//
// Generated with FrostbiteGen by Chod
// File: SDK\PamControllerRumbleEntityData.h
// Created: Wed Mar 10 19:04:45 2021
//

#ifndef FBGEN_PamControllerRumbleEntityData_H
#define FBGEN_PamControllerRumbleEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamControllerRumbleEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872940;
	}
	Realm m_Realm; // 0x18
	float m_LowFrequency; // 0x1c
	float m_HighFrequency; // 0x20
	float m_Duration; // 0x24
	float m_ContinuousLowFrequency; // 0x28
	float m_ContinuousHighFrequency; // 0x2c
	float m_ContinuousLeftTriggerFrequency; // 0x30
	float m_ContinuousRightTriggerFrequency; // 0x34
	float m_ContinousFrequencyTimeoutDuration; // 0x38
	float m_StrengthScale; // 0x3c
}; // size = 0x40

#endif // FBGEN_PamControllerRumbleEntityData_H
