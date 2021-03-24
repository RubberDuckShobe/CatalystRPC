//
// Generated with FrostbiteGen by Chod
// File: SDK\PoseTrackKeyframe.h
// Created: Wed Mar 10 19:03:04 2021
//

#ifndef FBGEN_PoseTrackKeyframe_H
#define FBGEN_PoseTrackKeyframe_H

#include "PoseDefinition.h"
#include "PoseTransitionBase.h"
#include "TimelineKeyframeData.h"

class PoseTrackKeyframe :
	public TimelineKeyframeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142823A00;
	}
	float m_Time; // 0x10
	unsigned char _0x14[0x4];
	PoseDefinition* m_TransitionTo; // 0x18
	float m_DurationOverride; // 0x20
	unsigned char _0x24[0x4];
	PoseTransitionBase* m_TransitionOverride; // 0x28
}; // size = 0x30

#endif // FBGEN_PoseTrackKeyframe_H
