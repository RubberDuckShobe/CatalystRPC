//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectNodeData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectNodeData_H
#define FBGEN_ObjectNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class ObjectNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9000;
	}
	AudioGraphNodePort m_In; // 0x10
	SoundGraphPluginRef m_VuPlugin; // 0x18
	SoundGraphPluginRef m_ObjectPlugin; // 0x1b
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_ObjectNodeData_H
