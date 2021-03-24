//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTintPreset.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTintPreset_H
#define FBGEN_MorphTintPreset_H

#include "MorphTintPresetChannel.h"
#include "Asset.h"

class MorphTintPreset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826210;
	}
	unsigned char _0x18[0x8];
	MorphTintPresetChannel m_RChannel; // 0x20
	MorphTintPresetChannel m_GChannel; // 0x60
	MorphTintPresetChannel m_BChannel; // 0xa0
	MorphTintPresetChannel m_AChannel; // 0xe0
}; // size = 0x120

#endif // FBGEN_MorphTintPreset_H
