//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationEntityData.h
// Created: Wed Mar 10 18:59:07 2021
//

#ifndef FBGEN_VoiceOverConversationEntityData_H
#define FBGEN_VoiceOverConversationEntityData_H

#include "VoiceOverConversationInfo.h"
#include "Array.h"
#include "EntityData.h"

class VoiceOverConversationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810E60;
	}
	VoiceOverConversationInfo m_Conversation; // 0x18
	Array<VoiceOverConversationEntityTrackInfo> m_TrackInfos; // 0x48
	float m_TriggerDelay; // 0x50
	float m_FinishedDelay; // 0x54
	int m_PronunciationIndex; // 0x58
	bool m_RunOnce; // 0x5c
	bool m_NeedsTriggerResult; // 0x5d
	bool m_CancelOnDeinit; // 0x5e
	unsigned char _0x5f[0x1];
}; // size = 0x60

#endif // FBGEN_VoiceOverConversationEntityData_H
