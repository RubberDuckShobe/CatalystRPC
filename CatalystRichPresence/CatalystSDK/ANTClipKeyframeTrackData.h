//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTClipKeyframeTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTClipKeyframeTrackData_H
#define FBGEN_ANTClipKeyframeTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class ANTClipKeyframeTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428188A0;
	}
	Array<ANTClipKeyframe*> m_Keyframes; // 0x28
}; // size = 0x30

#endif // FBGEN_ANTClipKeyframeTrackData_H
