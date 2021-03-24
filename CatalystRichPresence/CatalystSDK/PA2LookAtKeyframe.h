//
// Generated with FrostbiteGen by Chod
// File: SDK\PA2LookAtKeyframe.h
// Created: Wed Mar 10 19:05:23 2021
//

#ifndef FBGEN_PA2LookAtKeyframe_H
#define FBGEN_PA2LookAtKeyframe_H

#include "PA2LookAtTarget.h"
#include "TimelineKeyframeData.h"

class PA2LookAtKeyframe :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427F7360;
	}
	float m_Time; // 0x10
	unsigned char _0x14[0x4];
	PA2LookAtTarget* m_Target; // 0x18
	int m_Controller; // 0x20
	bool m_SnapToTarget; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PA2LookAtKeyframe_H
