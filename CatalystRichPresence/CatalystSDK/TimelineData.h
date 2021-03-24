//
// Generated with FrostbiteGen by Chod
// File: SDK\TimelineData.h
// Created: Wed Mar 10 19:00:15 2021
//

#ifndef FBGEN_TimelineData_H
#define FBGEN_TimelineData_H

#include "Array.h"
#include "TimelineTrackData.h"

class TimelineData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C620;
	}
	Array<TimelineTrackData*> m_Children; // 0x28
}; // size = 0x30

#endif // FBGEN_TimelineData_H
