//
// Generated with FrostbiteGen by Chod
// File: SDK\AudioGraphNodeConfigData.h
// Created: Wed Mar 10 19:08:36 2021
//

#ifndef FBGEN_AudioGraphNodeConfigData_H
#define FBGEN_AudioGraphNodeConfigData_H

#include "AudioGraphNodeData.h"
#include "DataContainer.h"

class AudioGraphNodeConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1CD0;
	}
	AudioGraphNodeData* m_Node; // 0x10
}; // size = 0x18

#endif // FBGEN_AudioGraphNodeConfigData_H
