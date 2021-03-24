//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundEntityTrackAssetLayerData.h
// Created: Wed Mar 10 19:01:16 2021
//

#ifndef FBGEN_SoundEntityTrackAssetLayerData_H
#define FBGEN_SoundEntityTrackAssetLayerData_H

#include "Array.h"
#include "SoundEntityTrackLayerData.h"

class SoundEntityTrackAssetLayerData :
	public SoundEntityTrackLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C7DA0;
	}
	Array<SoundEntityTrackAssetKeyframeData*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_SoundEntityTrackAssetLayerData_H
