//
// Generated with FrostbiteGen by Chod
// File: SDK\EntityTrackBaseData.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntityTrackBaseData_H
#define FBGEN_EntityTrackBaseData_H

#include "Array.h"
#include "EntityTrackSharingPolicy.h"
#include "TimelineTrackData.h"

class EntityTrackBaseData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283E2F0;
	}
	Array<TimelineTrackData*> m_Children; // 0x28
	EntityTrackSharingPolicy m_EntitySharingPolicy; // 0x30
	bool m_InheritedToChildConversationLines; // 0x34
	bool m_Required; // 0x35
	bool m_HandleDeletedEntity; // 0x36
	unsigned char _0x37[0x1];
}; // size = 0x38

#endif // FBGEN_EntityTrackBaseData_H
