//
// Generated with FrostbiteGen by Chod
// File: SDK\ContentPresetContainer.h
// Created: Wed Mar 10 19:07:33 2021
//

#ifndef FBGEN_ContentPresetContainer_H
#define FBGEN_ContentPresetContainer_H

#include "Array.h"
#include "Asset.h"

class ContentPresetContainer :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B3210;
	}
	Array<ContentPreset*> m_Presets; // 0x18
}; // size = 0x20

#endif // FBGEN_ContentPresetContainer_H
