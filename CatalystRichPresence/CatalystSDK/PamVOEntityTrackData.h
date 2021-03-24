//
// Generated with FrostbiteGen by Chod
// File: SDK\PamVOEntityTrackData.h
// Created: Wed Mar 10 19:03:21 2021
//

#ifndef FBGEN_PamVOEntityTrackData_H
#define FBGEN_PamVOEntityTrackData_H

#include "SoundAsset.h"
#include "Array.h"
#include "VOSoundEntityTrackAssetLayerData.h"
#include "LinkTrackData.h"

class PamVOEntityTrackData :
	public LinkTrackData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428520A0;
	}
	SoundAsset* m_Sound; // 0x38
	Array<SoundEntityTrackLayerData*> m_LayerTracks; // 0x40
	VOSoundEntityTrackAssetLayerData* m_AnimTrack; // 0x48
	unsigned int m_GuideTrackSourceHash; // 0x50
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_PamVOEntityTrackData_H
