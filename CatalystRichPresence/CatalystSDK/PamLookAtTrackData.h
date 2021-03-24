//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLookAtTrackData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamLookAtTrackData_H
#define FBGEN_PamLookAtTrackData_H

#include "FloatTrackData.h"
#include "LayeredTransformTrackData.h"
#include "TimelineTrackData.h"

class PamLookAtTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852460;
	}
	FloatTrackData* m_LookAtWeight; // 0x28
	LayeredTransformTrackData* m_LookAtTransform; // 0x30
	FloatTrackData* m_FocusWeight; // 0x38
	LayeredTransformTrackData* m_FocusPoint; // 0x40
}; // size = 0x48

#endif // FBGEN_PamLookAtTrackData_H
