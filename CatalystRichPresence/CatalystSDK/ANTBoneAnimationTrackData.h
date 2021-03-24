//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTBoneAnimationTrackData.h
// Created: Wed Mar 10 19:08:51 2021
//

#ifndef FBGEN_ANTBoneAnimationTrackData_H
#define FBGEN_ANTBoneAnimationTrackData_H

#include "LayeredTransformTrackData.h"
#include "ANTControlTrackData.h"
#include "Array.h"
#include "AntRef.h"
#include "TimelineTrackData.h"

class ANTBoneAnimationTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428225B0;
	}
	LayeredTransformTrackData* m_LayeredTransformTrack; // 0x28
	ANTControlTrackData* m_AntControlTrack; // 0x30
	Array<TimelineTrackData*> m_BoneTracks; // 0x38
	AntRef m_Actor; // 0x40
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_ANTBoneAnimationTrackData_H
