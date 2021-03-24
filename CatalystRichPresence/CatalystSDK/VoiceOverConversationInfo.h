//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationInfo.h
// Created: Wed Mar 10 18:59:06 2021
//

#ifndef FBGEN_VoiceOverConversationInfo_H
#define FBGEN_VoiceOverConversationInfo_H

#include "Array.h"
#include "VoiceOverConversationInterruptMode.h"
#include "VoiceOverConversationQueueMode.h"
struct VoiceOverConversationInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D04C8;
	}
	Array<VoiceOverDialogGroup*> m_Groups; // 0x0
	Array<VoiceOverDialogTrack*> m_Tracks; // 0x8
	Array<VoiceOverPronunciation*> m_Pronunciations; // 0x10
	VoiceOverConversationInterruptMode m_InterruptMode; // 0x18
	int m_Priority; // 0x1c
	VoiceOverConversationQueueMode m_QueueMode; // 0x20
	float m_Relevancy; // 0x24
	unsigned char m_LastSequenceIndex; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_VoiceOverConversationInfo_H
