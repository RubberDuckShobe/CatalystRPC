//
// Generated with FrostbiteGen by Chod
// File: SDK\FadeTrackKeyframe.h
// Created: Wed Mar 10 19:06:49 2021
//

#ifndef FBGEN_FadeTrackKeyframe_H
#define FBGEN_FadeTrackKeyframe_H

#include "FadeTrackKeyframeType.h"
#include "DataContainer.h"

class FadeTrackKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823FA0;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
	FadeTrackKeyframeType m_FadeType; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_FadeTrackKeyframe_H
