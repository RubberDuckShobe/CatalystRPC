//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverSystemAsset.h
// Created: Wed Mar 10 18:58:57 2021
//

#ifndef FBGEN_VoiceOverSystemAsset_H
#define FBGEN_VoiceOverSystemAsset_H

#include "AudioLanguage.h"
#include "VoiceOverPronunciation.h"
#include "Array.h"
#include "VoiceOverConversationQueueGroup.h"
#include "Asset.h"

class VoiceOverSystemAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D38F0;
	}
	Array<VoiceOverInterval*> m_Intervals; // 0x18
	Array<VoiceOverLabel*> m_Labels; // 0x20
	Array<VoiceOverObject*> m_Types; // 0x28
	Array<VoiceOverObject*> m_Objects; // 0x30
	Array<VoiceOverGlobalConstantValue*> m_Constants; // 0x38
	AudioLanguage* m_MasterLanguage; // 0x40
	VoiceOverPronunciation* m_DefaultPronunciation; // 0x48
	Array<VoiceOverPronunciation*> m_Pronunciations; // 0x50
	Array<VoiceOverConversationQueueGroup*> m_QueueGroups; // 0x58
	VoiceOverConversationQueueGroup* m_DefaultPositionedQueueGroup; // 0x60
	VoiceOverConversationQueueGroup* m_DefaultUnpositionedQueueGroup; // 0x68
}; // size = 0x70

#endif // FBGEN_VoiceOverSystemAsset_H
