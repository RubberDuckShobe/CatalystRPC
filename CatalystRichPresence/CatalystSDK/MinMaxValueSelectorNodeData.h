//
// Generated with FrostbiteGen by Chod
// File: SDK\MinMaxValueSelectorNodeData.h
// Created: Wed Mar 10 19:05:52 2021
//

#ifndef FBGEN_MinMaxValueSelectorNodeData_H
#define FBGEN_MinMaxValueSelectorNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MinMaxValueSelectorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2A50;
	}
	Array<MinMaxValueSelectorEntry*> m_Inputs; // 0x10
	AudioGraphNodePort m_MaxValue; // 0x18
	AudioGraphNodePort m_MaxIndex; // 0x20
	AudioGraphNodePort m_MinValue; // 0x28
	AudioGraphNodePort m_MinIndex; // 0x30
}; // size = 0x38

#endif // FBGEN_MinMaxValueSelectorNodeData_H
