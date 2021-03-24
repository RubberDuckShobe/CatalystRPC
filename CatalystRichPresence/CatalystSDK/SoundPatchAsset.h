//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundPatchAsset.h
// Created: Wed Mar 10 19:01:12 2021
//

#ifndef FBGEN_SoundPatchAsset_H
#define FBGEN_SoundPatchAsset_H

#include "Array.h"
#include "AudioGraphEvent.h"
#include "SoundGraphAsset.h"

class SoundPatchAsset :
	public SoundGraphAsset // size = 0x48
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1130;
	}
	Array<AudioGraphNodeData*> m_OutputNodes; // 0x48
	float m_Loudness; // 0x50
	float m_AILoudness; // 0x54
	float m_Radius; // 0x58
	float m_DopplerFactor; // 0x5c
	float m_MasterPitch; // 0x60
	unsigned char _0x64[0x4];
	AudioGraphEvent* m_DefaultStartEvent; // 0x68
	AudioGraphEvent* m_DefaultStopEvent; // 0x70
	AudioGraphEvent* m_DefaultEnterScopeEvent; // 0x78
	AudioGraphEvent* m_DefaultForceInitEvent; // 0x80
	bool m_IsLooping; // 0x88
	bool m_ForceIsLooping; // 0x89
	bool m_IsPersistent; // 0x8a
	bool m_UseLowFrequencyUpdate; // 0x8b
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_SoundPatchAsset_H
