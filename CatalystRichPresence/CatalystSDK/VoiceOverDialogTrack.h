//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogTrack.h
// Created: Wed Mar 10 18:59:03 2021
//

#ifndef FBGEN_VoiceOverDialogTrack_H
#define FBGEN_VoiceOverDialogTrack_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverDialogTakeBehavior.h"
#include "AudioGraphNodeData.h"
#include "VoiceOverConversationQueueGroup.h"
#include "Array.h"
#include "DataContainer.h"

class VoiceOverDialogTrack :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4010;
	}
	VoiceOverValueConnection m_Source; // 0x10
	VoiceOverValueConnection m_TakeControl; // 0x20
	Array<VoiceOverDialogTakeMapping> m_TakeIndexMapping; // 0x30
	VoiceOverDialogTakeBehavior m_TakeSwitching; // 0x38
	unsigned char _0x3c[0x4];
	AudioGraphNodeData* m_Output; // 0x40
	AudioGraphNodeData* m_SamplerNode; // 0x48
	VoiceOverConversationQueueGroup* m_QueueGroup; // 0x50
	Array<VoiceOverDialogClip*> m_Clips; // 0x58
	bool m_TakeSwitchingOnResume; // 0x60
	unsigned char m_ParentTrackIndex; // 0x61
	unsigned char m_GroupIndex; // 0x62
	unsigned char _0x63[0x5];
}; // size = 0x68

#endif // FBGEN_VoiceOverDialogTrack_H
