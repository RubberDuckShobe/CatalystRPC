//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundPatchConfigurationDebugData.h
// Created: Wed Mar 10 19:01:11 2021
//

#ifndef FBGEN_SoundPatchConfigurationDebugData_H
#define FBGEN_SoundPatchConfigurationDebugData_H

#include "Array.h"
#include "DataContainer.h"

class SoundPatchConfigurationDebugData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0A10;
	}
	Array<AudioGraphNodeData*> m_SoloOutputNodes; // 0x10
}; // size = 0x18

#endif // FBGEN_SoundPatchConfigurationDebugData_H
