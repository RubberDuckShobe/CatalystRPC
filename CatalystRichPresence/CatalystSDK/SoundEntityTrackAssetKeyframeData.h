//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityTrackAssetKeyframeData.h
// Created: Wed Mar 10 19:01:16 2021
//

#ifndef FBGEN_SoundEntityTrackAssetKeyframeData_H
#define FBGEN_SoundEntityTrackAssetKeyframeData_H

#include "SoundWaveAsset.h"
#include "SoundEntityTrackKeyframeData.h"

class SoundEntityTrackAssetKeyframeData :
	public SoundEntityTrackKeyframeData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6F60;
	}
	SoundWaveAsset* m_Asset; // 0x18
	float m_MaxLength; // 0x20
	bool m_TriggerDefaultStartEvent; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_SoundEntityTrackAssetKeyframeData_H
