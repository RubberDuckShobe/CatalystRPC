//
// Generated with FrostbiteGen by Chod
// File: SDK\MixerPreset.h
// Created: Wed Mar 10 19:05:50 2021
//

#ifndef FBGEN_MixerPreset_H
#define FBGEN_MixerPreset_H

#include "Array.h"
#include "DataContainer.h"

class MixerPreset :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1550;
	}
	unsigned int m_NameHash; // 0x10
	unsigned char _0x14[0x4];
	Array<MixerPresetGroupData> m_Groups; // 0x18
	Array<MixerPresetNodeData> m_Nodes; // 0x20
}; // size = 0x28

#endif // FBGEN_MixerPreset_H
