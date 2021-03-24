//
// Generated with FrostbiteGen by Chod
// File: SDK\SlaveTimelineKeyframeData.h
// Created: Wed Mar 10 19:01:21 2021
//

#ifndef FBGEN_SlaveTimelineKeyframeData_H
#define FBGEN_SlaveTimelineKeyframeData_H

#include "TimelineEntityData.h"
#include "Array.h"
#include "TimelineKeyframeData.h"

class SlaveTimelineKeyframeData :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DD50;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	float m_GuideTime; // 0x18
	unsigned char _0x1c[0x4];
	TimelineEntityData* m_TimelineData; // 0x20
	Array<Guid> m_SlaveGuidChain; // 0x28
}; // size = 0x30

#endif // FBGEN_SlaveTimelineKeyframeData_H
