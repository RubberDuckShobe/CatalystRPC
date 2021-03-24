//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkedMasterTimelineTrackData.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_LinkedMasterTimelineTrackData_H
#define FBGEN_LinkedMasterTimelineTrackData_H

#include "Array.h"
#include "LinkTrackData.h"

class LinkedMasterTimelineTrackData :
	public LinkTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DE10;
	}
	float m_LinkedTimelineTimeOffset; // 0x38
	unsigned char _0x3c[0x4];
	Array<LinkedMasterTimelineKeyframe*> m_Keyframes; // 0x40
}; // size = 0x48

#endif // FBGEN_LinkedMasterTimelineTrackData_H
