//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerInputTriggerEntityData.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerInputTriggerEntityData_H
#define FBGEN_PlayerInputTriggerEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PlayerInputTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F4D0;
	}
	Realm m_Realm; // 0x18
	int m_EntryInputActions; // 0x1c
	float m_ValueModifier; // 0x20
	float m_ValueModifierForMouse; // 0x24
	float m_HoldDownTime; // 0x28
	float m_AccumulatedValueAtStart; // 0x2c
	float m_TrailingValueAtStart; // 0x30
	bool m_ClampValueAfterMouseModifier; // 0x34
	bool m_EnabledFromStart; // 0x35
	bool m_SendTriggerEvents; // 0x36
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_PlayerInputTriggerEntityData_H
