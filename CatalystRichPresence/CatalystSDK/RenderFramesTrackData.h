//
// Generated with FrostbiteGen by Chod
// File: SDK\RenderFramesTrackData.h
// Created: Wed Mar 10 19:02:38 2021
//

#ifndef FBGEN_RenderFramesTrackData_H
#define FBGEN_RenderFramesTrackData_H

#include "Array.h"
#include "TimelineTrackData.h"

class RenderFramesTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846F40;
	}
	Array<RenderFramesKeyframe*> m_Keyframes; // 0x28
}; // size = 0x30

#endif // FBGEN_RenderFramesTrackData_H
