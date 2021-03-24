//
// Generated with FrostbiteGen by Chod
// File: SDK\MasterTimelineTrackData.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MasterTimelineTrackData_H
#define FBGEN_MasterTimelineTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class MasterTimelineTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DCF0;
	}
	Array<SlaveTimelineKeyframeData*> m_Keyframes; // 0x28
	Array<TimelineTrackData*> m_Children; // 0x30
}; // size = 0x38

#endif // FBGEN_MasterTimelineTrackData_H
