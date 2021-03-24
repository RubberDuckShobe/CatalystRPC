//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerPresetGroupData.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerPresetGroupData_H
#define FBGEN_MixerPresetGroupData_H

#include "MixGroup.h"
#include "MixGroupState.h"
#include "Array.h"
struct MixerPresetGroupData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0648;
	}
	MixGroup* m_Group; // 0x0
	MixGroupState m_State; // 0x8
	float m_AttackTime; // 0xc
	float m_ReleaseTime; // 0x10
	int m_Priority; // 0x14
	Array<MixGroupPropertyValue> m_Properties; // 0x18
	bool m_IsDominant; // 0x20
	bool m_IsAdditive; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_MixerPresetGroupData_H
