//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerAsset.h
// Created: Wed Mar 10 19:05:51 2021
//

#ifndef FBGEN_MixerAsset_H
#define FBGEN_MixerAsset_H

#include "MixerGraphData.h"
#include "Array.h"
#include "MixerPreset.h"
#include "Asset.h"

class MixerAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1490;
	}
	MixerGraphData* m_Graph; // 0x18
	Array<MixerPreset*> m_Presets; // 0x20
	MixerPreset* m_DefaultPreset; // 0x28
	bool m_Bypass; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_MixerAsset_H
