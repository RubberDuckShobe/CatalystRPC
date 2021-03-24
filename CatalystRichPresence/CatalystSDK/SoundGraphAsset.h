//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphAsset.h
// Created: Wed Mar 10 19:01:14 2021
//

#ifndef FBGEN_SoundGraphAsset_H
#define FBGEN_SoundGraphAsset_H

#include "SoundGraphData.h"
#include "MixerAsset.h"
#include "SoundAsset.h"

class SoundGraphAsset :
	public SoundAsset // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1190;
	}
	SoundGraphData* m_Graph; // 0x38
	MixerAsset* m_Mixer; // 0x40
}; // size = 0x48

#endif // FBGEN_SoundGraphAsset_H
