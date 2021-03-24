//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerSystemAsset.h
// Created: Wed Mar 10 19:05:49 2021
//

#ifndef FBGEN_MixerSystemAsset_H
#define FBGEN_MixerSystemAsset_H

#include "Array.h"
#include "Asset.h"

class MixerSystemAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1430;
	}
	Array<MixGroup*> m_Groups; // 0x18
	bool m_ExponentialGainInterpolation; // 0x20
	bool m_OctaveFrequencyInterpolationLpf; // 0x21
	unsigned char _0x22[0x6];
}; // size = 0x28

#endif // FBGEN_MixerSystemAsset_H
