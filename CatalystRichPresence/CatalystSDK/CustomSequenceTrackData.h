//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomSequenceTrackData.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomSequenceTrackData_H
#define FBGEN_CustomSequenceTrackData_H

#include "Array.h"
#include "EntityData.h"

class CustomSequenceTrackData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA740;
	}
	const char* m_TrackName; // 0x18
	Array<CustomSequenceTrackLinkMapping*> m_InputLinkMap; // 0x20
	Array<CustomSequenceTrackLinkMapping*> m_OutputLinkMap; // 0x28
	Array<CustomSequenceTrackEventMapping*> m_EventMap; // 0x30
	Array<CustomSequenceTrackPropertyMapping*> m_SourcePropertyMap; // 0x38
	Array<CustomSequenceTrackPropertyMapping*> m_TargetPropertyMap; // 0x40
	Array<CustomSequenceTrackPropertyMapping*> m_SourceAndTargetPropertyMap; // 0x48
}; // size = 0x50

#endif // FBGEN_CustomSequenceTrackData_H
