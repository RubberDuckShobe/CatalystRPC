//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicSelector.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicSelector_H
#define FBGEN_MusicSelector_H

#include "MusicEventData.h"
#include "MusicSelectorTriggerType.h"
#include "MusicSyncType.h"
#include "MusicStreamableData.h"
#include "MusicTransition.h"
#include "Array.h"
#include "DataContainer.h"

class MusicSelector :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7380;
	}
	MusicEventData* m_Event; // 0x10
	MusicSelectorTriggerType m_TriggerType; // 0x18
	MusicSyncType m_SyncType; // 0x1c
	MusicStreamableData* m_Target; // 0x20
	MusicTransition* m_Default; // 0x28
	Array<MusicTransition*> m_Transitions; // 0x30
}; // size = 0x38

#endif // FBGEN_MusicSelector_H
