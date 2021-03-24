//
// Generated with FrostbiteGen by Chod
// File: SDK\AiffWriterNodeData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AiffWriterNodeData_H
#define FBGEN_AiffWriterNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class AiffWriterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9BA0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Start; // 0x18
	AudioGraphNodePort m_Stop; // 0x20
	const char* m_FileName; // 0x28
	SoundGraphPluginRef m_Plugin; // 0x30
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_AiffWriterNodeData_H
