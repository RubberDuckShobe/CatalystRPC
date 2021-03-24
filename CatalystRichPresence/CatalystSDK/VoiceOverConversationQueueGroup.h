//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationQueueGroup.h
// Created: Wed Mar 10 18:59:05 2021
//

#ifndef FBGEN_VoiceOverConversationQueueGroup_H
#define FBGEN_VoiceOverConversationQueueGroup_H

#include "VoiceOverConversationQueueGroupPolyphony.h"
#include "DataContainer.h"

class VoiceOverConversationQueueGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D39B0;
	}
	const char* m_Name; // 0x10
	VoiceOverConversationQueueGroupPolyphony m_PolyphonyMode; // 0x18
	unsigned int m_Polyphony; // 0x1c
}; // size = 0x20

#endif // FBGEN_VoiceOverConversationQueueGroup_H
