//
// Generated with FrostbiteGen by Chod
// File: SDK\CrossfaderNodeData.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CrossfaderNodeData_H
#define FBGEN_CrossfaderNodeData_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class CrossfaderNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9960;
	}
	AudioGraphNodePort m_In1; // 0x10
	AudioGraphNodePort m_In2; // 0x18
	AudioGraphNodePort m_Ctrl; // 0x20
	AudioGraphNodePort m_Out; // 0x28
	SoundGraphPluginRef m_Plugin1; // 0x30
	SoundGraphPluginRef m_Plugin2; // 0x33
	unsigned char _0x36[0x2];
}; // size = 0x38

#endif // FBGEN_CrossfaderNodeData_H
