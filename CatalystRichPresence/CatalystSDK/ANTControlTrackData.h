//
// Generated with FrostbiteGen by Chod
// File: SDK\ANTControlTrackData.h
// Created: Wed Mar 10 19:08:50 2021
//

#ifndef FBGEN_ANTControlTrackData_H
#define FBGEN_ANTControlTrackData_H

#include "Array.h"
#include "LinkTrackData.h"

class ANTControlTrackData :
	public LinkTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818780;
	}
	Array<ANTLayerData*> m_LayerTracks; // 0x38
	Array<BoneInfo> m_BoneInfos; // 0x40
	bool m_HideWhenNoClip; // 0x48
	bool m_ForceDisableAnimationLOD; // 0x49
	bool m_AllowPreviousAnimationsToCarryForward; // 0x4a
	unsigned char _0x4b[0x5];
}; // size = 0x50

#endif // FBGEN_ANTControlTrackData_H
