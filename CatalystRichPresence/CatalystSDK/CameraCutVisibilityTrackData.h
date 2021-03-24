//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraCutVisibilityTrackData.h
// Created: Wed Mar 10 19:08:21 2021
//

#ifndef FBGEN_CameraCutVisibilityTrackData_H
#define FBGEN_CameraCutVisibilityTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class CameraCutVisibilityTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFAF0;
	}
	Array<CameraCutVisibilityKeyframe*> m_Keyframes; // 0x28
	float m_StartTime; // 0x30
	float m_EndTime; // 0x34
	bool m_SetInitialVisibilityOnStart; // 0x38
	bool m_InitialVisibility; // 0x39
	bool m_Visibility; // 0x3a
	unsigned char _0x3b[0x5];
}; // size = 0x40

#endif // FBGEN_CameraCutVisibilityTrackData_H
