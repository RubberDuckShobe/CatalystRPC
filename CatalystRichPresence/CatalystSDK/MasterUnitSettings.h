//
// Generated with FrostbiteGen by Chod
// File: SDK\MasterUnitSettings.h
// Created: Wed Mar 10 19:06:03 2021
//

#ifndef FBGEN_MasterUnitSettings_H
#define FBGEN_MasterUnitSettings_H

#include "EqualizerSettings.h"
#include "CompressorSettings.h"
#include "DataContainer.h"

class MasterUnitSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C84C0;
	}
	const char* m_Name; // 0x10
	EqualizerSettings* m_Equalizer; // 0x18
	CompressorSettings* m_Compressor; // 0x20
	float m_MasterVolume; // 0x28
	float m_MasterLfeGain; // 0x2c
	float m_MasterDialogGain; // 0x30
	float m_ReverbVolume; // 0x34
	float m_MainMixVolume; // 0x38
	float m_DistortionClipLevel; // 0x3c
	float m_ParallelDistortionGain; // 0x40
	float m_PostEffectsGain; // 0x44
	float m_FadeTime; // 0x48
	unsigned char _0x4c[0x4];
}; // size = 0x50

#endif // FBGEN_MasterUnitSettings_H
