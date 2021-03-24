//
// Generated with FrostbiteGen by Chod
// File: SDK\FadeTrackData.h
// Created: Wed Mar 10 19:06:49 2021
//

#ifndef FBGEN_FadeTrackData_H
#define FBGEN_FadeTrackData_H

#include "Array.h"
#include "LocalPlayerId.h"
#include "TimelineTrackData.h"

class FadeTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823F40;
	}
	Array<FadeTrackKeyframe*> m_Keyframes; // 0x28
	LocalPlayerId m_LocalPlayerId; // 0x30
	bool m_FadeScreen; // 0x34
	bool m_FadeUI; // 0x35
	bool m_FadeAudio; // 0x36
	bool m_FadeMovie; // 0x37
	bool m_FadeRumble; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_FadeTrackData_H
