//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraDirectorProxyTrackData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraDirectorProxyTrackData_H
#define FBGEN_CameraDirectorProxyTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class CameraDirectorProxyTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFA30;
	}
	Array<TimelineTrackData*> m_Children; // 0x28
	Array<CameraDirectorProxyKeyframe*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_CameraDirectorProxyTrackData_H
