//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTintPresetGroup.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTintPresetGroup_H
#define FBGEN_MorphTintPresetGroup_H

#include "Array.h"
#include "Asset.h"

class MorphTintPresetGroup :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428261B0;
	}
	Array<MorphTintPreset*> m_Presets; // 0x18
}; // size = 0x20

#endif // FBGEN_MorphTintPresetGroup_H
