//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConversationGroupEntityData.h
// Created: Wed Mar 10 18:59:06 2021
//

#ifndef FBGEN_VoiceOverConversationGroupEntityData_H
#define FBGEN_VoiceOverConversationGroupEntityData_H

#include "VoiceOverConversationQueueGroup.h"
#include "EntityData.h"

class VoiceOverConversationGroupEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7B00;
	}
	VoiceOverConversationQueueGroup* m_QueueGroup; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverConversationGroupEntityData_H
