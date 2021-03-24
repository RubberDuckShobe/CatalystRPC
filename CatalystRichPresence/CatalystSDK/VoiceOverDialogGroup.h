//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogGroup.h
// Created: Wed Mar 10 18:59:04 2021
//

#ifndef FBGEN_VoiceOverDialogGroup_H
#define FBGEN_VoiceOverDialogGroup_H

#include "SoundAsset.h"
#include "Array.h"
#include "DataContainer.h"

class VoiceOverDialogGroup :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3FB0;
	}
	SoundAsset* m_Sound; // 0x10
	Array<VoiceOverDialogSoundParameter> m_Parameters; // 0x18
	unsigned char m_TrackCount; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_VoiceOverDialogGroup_H
