//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraDirectorTrackBaseData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraDirectorTrackBaseData_H
#define FBGEN_CameraDirectorTrackBaseData_H

#include "Array.h"
#include "CameraTrackBaseData.h"
#include "TimelineTrackData.h"

class CameraDirectorTrackBaseData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428241E0;
	}
	Array<TimelineTrackData*> m_Children; // 0x28
	CameraTrackBaseData* m_PostTimelineCamera; // 0x30
}; // size = 0x38

#endif // FBGEN_CameraDirectorTrackBaseData_H
