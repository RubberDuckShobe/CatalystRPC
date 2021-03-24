//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTBlendKeyframeTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTBlendKeyframeTrackData_H
#define FBGEN_ANTBlendKeyframeTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class ANTBlendKeyframeTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818900;
	}
	Array<ANTBlendKeyframe*> m_Keyframes; // 0x28
}; // size = 0x30

#endif // FBGEN_ANTBlendKeyframeTrackData_H
