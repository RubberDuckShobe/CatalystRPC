//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityTrackData.h
// Created: Wed Mar 10 19:01:15 2021
//

#ifndef FBGEN_SoundEntityTrackData_H
#define FBGEN_SoundEntityTrackData_H

#include "SoundAsset.h"
#include "Array.h"
#include "GuideTrackData.h"

class SoundEntityTrackData :
	public GuideTrackData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7D40;
	}
	SoundAsset* m_Sound; // 0x30
	Array<SoundEntityTrackTransformLayerData*> m_TransformTracks; // 0x38
	Array<SoundEntityTrackLayerData*> m_SoundTracks; // 0x40
	unsigned int m_GuideTrackSourceHash; // 0x48
	float m_TimelineFrameRate; // 0x4c
	bool m_ForceStopWithTimeline; // 0x50
	unsigned char _0x51[0x7];
}; // size = 0x58

#endif // FBGEN_SoundEntityTrackData_H
