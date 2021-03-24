//
// Generated with FrostbiteGen by Chod
// File: SDK\SequenceEntityData.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SequenceEntityData_H
#define FBGEN_SequenceEntityData_H

#include "Realm.h"
#include "Array.h"
#include "UpdatePass.h"
#include "EntityData.h"

class SequenceEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA6E0;
	}
	Array<SequenceEventData> m_Events; // 0x18
	int m_SequenceStartTime; // 0x20
	int m_SequenceLength; // 0x24
	Realm m_Realm; // 0x28
	unsigned char _0x2c[0x4];
	Array<PropertyTrackData*> m_PropertyTracks; // 0x30
	Array<CustomSequenceTrackData*> m_CustomSequenceTracks; // 0x38
	UpdatePass m_ClientUpdatePass; // 0x40
	UpdatePass m_ServerUpdatePass; // 0x44
	float m_ExternalTime; // 0x48
	float m_PlaybackSpeed; // 0x4c
	bool m_Looping; // 0x50
	bool m_AutoStart; // 0x51
	bool m_AutoPlayFirstFrame; // 0x52
	bool m_PlayInReverse; // 0x53
	bool m_UseRealTimeClock; // 0x54
	unsigned char _0x55[0x3];
}; // size = 0x58

#endif // FBGEN_SequenceEntityData_H
