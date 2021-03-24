//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEntryInputTriggerInfo.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamEntryInputTriggerInfo_H
#define FBGEN_PamEntryInputTriggerInfo_H

struct PamEntryInputTriggerInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C258;
	}
	int m_EntryInputAction; // 0x0
	float m_ValueModifier; // 0x4
	float m_ValueModifierForMouse; // 0x8
	float m_AccumulatedValueAtStart; // 0xc
	float m_TrailingValueAtStart; // 0x10
	unsigned int m_SetTriggerDescriptionOnHash; // 0x14
	unsigned int m_SetTriggerDescriptionOffHash; // 0x18
	unsigned int m_SetTriggerEnabledHash; // 0x1c
	unsigned int m_SetTriggerDisabledHash; // 0x20
	unsigned int m_OnTriggerHash; // 0x24
	unsigned int m_OnTriggerDisabledHash; // 0x28
	unsigned int m_OnReleaseHash; // 0x2c
	unsigned int m_OnHoldDownHash; // 0x30
	unsigned int m_InTriggerDescriptionOffHash; // 0x34
	unsigned int m_InTriggerDisabledHash; // 0x38
	unsigned int m_InTriggerDescriptionSidHash; // 0x3c
	unsigned int m_InTriggerDisabledDescriptionSidHash; // 0x40
	unsigned int m_InTriggerDescriptionHash; // 0x44
	unsigned int m_InTriggerDisabledDescriptionHash; // 0x48
	unsigned int m_InTriggerHoldDownTimeHash; // 0x4c
	unsigned int m_OutValueHash; // 0x50
	unsigned int m_OutAccumulatedValueHash; // 0x54
	unsigned int m_OutTrailingValueHash; // 0x58
	unsigned int m_OutIsMouseInputHash; // 0x5c
	unsigned int m_OutBeenDownTimeHash; // 0x60
	bool m_ClampValueAfterMouseModifier; // 0x64
	bool m_SendTriggerEvents; // 0x65
	unsigned char _0x66[0x2];
}; // size = 0x68

#endif // FBGEN_PamEntryInputTriggerInfo_H
