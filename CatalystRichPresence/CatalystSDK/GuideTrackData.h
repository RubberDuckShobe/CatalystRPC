//
// Generated with FrostbiteGen by Chod
// File: SDK\GuideTrackData.h
// Created: Wed Mar 10 19:06:36 2021
//

#ifndef FBGEN_GuideTrackData_H
#define FBGEN_GuideTrackData_H

#include "TimelineTrackData.h"

class GuideTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283C380;
	}
	int m_GuideTrackPriority; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_GuideTrackData_H
