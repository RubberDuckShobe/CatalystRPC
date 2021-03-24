//
// Generated with FrostbiteGen by Chod
// File: SDK\VOSoundEntityTrackAssetLayerData.h
// Created: Wed Mar 10 18:59:33 2021
//

#ifndef FBGEN_VOSoundEntityTrackAssetLayerData_H
#define FBGEN_VOSoundEntityTrackAssetLayerData_H

#include "Array.h"
#include "SoundEntityTrackLayerData.h"

class VOSoundEntityTrackAssetLayerData :
	public SoundEntityTrackLayerData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852100;
	}
	Array<VOSoundEntityTrackAssetKeyframeData*> m_Keyframes; // 0x30
}; // size = 0x38

#endif // FBGEN_VOSoundEntityTrackAssetLayerData_H
