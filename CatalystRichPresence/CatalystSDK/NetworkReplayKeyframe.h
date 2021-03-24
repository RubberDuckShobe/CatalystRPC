//
// Generated with FrostbiteGen by Chod
// File: SDK\NetworkReplayKeyframe.h
// Created: Wed Mar 10 19:05:34 2021
//

#ifndef FBGEN_NetworkReplayKeyframe_H
#define FBGEN_NetworkReplayKeyframe_H

#include "TimelineKeyframeData.h"

class NetworkReplayKeyframe :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823E20;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	float m_StartTrim; // 0x18
	float m_EndTrim; // 0x1c
	const char* m_CaptureName; // 0x20
}; // size = 0x28

#endif // FBGEN_NetworkReplayKeyframe_H
