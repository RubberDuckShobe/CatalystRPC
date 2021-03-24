//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverEventEntityData.h
// Created: Wed Mar 10 18:59:02 2021
//

#ifndef FBGEN_VoiceOverEventEntityData_H
#define FBGEN_VoiceOverEventEntityData_H

#include "VoiceOverEvent.h"
#include "VoiceOverNamedValue.h"
#include "EntityData.h"

class VoiceOverEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810EC0;
	}
	VoiceOverEvent* m_VoEvent; // 0x18
	VoiceOverNamedValue* m_EventPlayer; // 0x20
	VoiceOverNamedValue* m_ExtraEventPlayer; // 0x28
	float m_TriggerDelay; // 0x30
	float m_FinishedDelay; // 0x34
	bool m_RunOnce; // 0x38
	bool m_CancelOnDeinit; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_VoiceOverEventEntityData_H
