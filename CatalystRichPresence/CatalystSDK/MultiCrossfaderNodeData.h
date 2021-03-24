//
// Generated with FrostbiteGen by Chod
// File: SDK\MultiCrossfaderNodeData.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultiCrossfaderNodeData_H
#define FBGEN_MultiCrossfaderNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MultiCrossfaderNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2990;
	}
	Array<MultiCrossfaderGroup*> m_CrossfaderGroups; // 0x10
	AudioGraphNodePort m_Start; // 0x18
	AudioGraphNodePort m_Stop; // 0x20
	AudioGraphNodePort m_Control; // 0x28
	bool m_LockControlValue; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_MultiCrossfaderNodeData_H
