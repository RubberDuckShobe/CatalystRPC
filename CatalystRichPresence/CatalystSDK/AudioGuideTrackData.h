//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGuideTrackData.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioGuideTrackData_H
#define FBGEN_AudioGuideTrackData_H

#include "SoundAsset.h"
#include "Array.h"
#include "GuideTrackData.h"

class AudioGuideTrackData :
	public GuideTrackData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C80A0;
	}
	SoundAsset* m_Sound; // 0x30
	const char* m_SoundPositionName; // 0x38
	Array<AudioGuideKeyframe*> m_Keyframes; // 0x40
}; // size = 0x48

#endif // FBGEN_AudioGuideTrackData_H
