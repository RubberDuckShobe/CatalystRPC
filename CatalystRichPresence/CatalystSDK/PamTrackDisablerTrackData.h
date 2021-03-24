//
// Generated with FrostbiteGen by Chod
// File: SDK\PamTrackDisablerTrackData.h
// Created: Wed Mar 10 19:03:41 2021
//

#ifndef FBGEN_PamTrackDisablerTrackData_H
#define FBGEN_PamTrackDisablerTrackData_H

#include "TimelineTrackData.h"
#include "Array.h"
#include "TimelineTrackData.h"

class PamTrackDisablerTrackData :
	public TimelineTrackData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428521C0;
	}
	int m_DisableTrackPinId; // 0x28
	unsigned char _0x2c[0x4];
	TimelineTrackData* m_TrackToDisable; // 0x30
	Array<PamTrackDisablerKeyframe*> m_Keyframes; // 0x38
}; // size = 0x40

#endif // FBGEN_PamTrackDisablerTrackData_H
