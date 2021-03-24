//
// Generated with FrostbiteGen by Chod
// File: SDK\VOSoundEntityTrackAssetKeyframeData.h
// Created: Wed Mar 10 18:59:33 2021
//

#ifndef FBGEN_VOSoundEntityTrackAssetKeyframeData_H
#define FBGEN_VOSoundEntityTrackAssetKeyframeData_H

#include "AntRef.h"
#include "SoundEntityTrackAssetKeyframeData.h"

class VOSoundEntityTrackAssetKeyframeData :
	public SoundEntityTrackAssetKeyframeData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852160;
	}
	AntRef m_AnimAsset; // 0x28
	float m_AnimLength; // 0x3c
	float m_AudioDelay; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_VOSoundEntityTrackAssetKeyframeData_H
