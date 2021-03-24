//
// Generated with FrostbiteGen by Chod
// File: SDK\LinkedMasterTimelineKeyframe.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_LinkedMasterTimelineKeyframe_H
#define FBGEN_LinkedMasterTimelineKeyframe_H

#include "DataContainer.h"

class LinkedMasterTimelineKeyframe :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DE70;
	}
	float m_Time; // 0x10
	float m_Length; // 0x14
}; // size = 0x18

#endif // FBGEN_LinkedMasterTimelineKeyframe_H
