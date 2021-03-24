//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGuideKeyframe.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioGuideKeyframe_H
#define FBGEN_AudioGuideKeyframe_H

#include "DataContainer.h"

class AudioGuideKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8100;
	}
	float m_Time; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_AudioGuideKeyframe_H
