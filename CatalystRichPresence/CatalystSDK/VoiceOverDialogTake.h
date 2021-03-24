//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverDialogTake.h
// Created: Wed Mar 10 18:59:04 2021
//

#ifndef FBGEN_VoiceOverDialogTake_H
#define FBGEN_VoiceOverDialogTake_H

#include "SoundWaveAsset.h"
#include "VoiceOverDialogTakeMeta.h"
struct VoiceOverDialogTake
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0728;
	}
	SoundWaveAsset* m_Wave; // 0x0
	VoiceOverDialogTakeMeta* m_Meta; // 0x8
}; // size = 0x10

#endif // FBGEN_VoiceOverDialogTake_H
