//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleValueSelectorNodeData.h
// Created: Wed Mar 10 19:01:24 2021
//

#ifndef FBGEN_SimpleValueSelectorNodeData_H
#define FBGEN_SimpleValueSelectorNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class SimpleValueSelectorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2450;
	}
	Array<float> m_OutValues; // 0x10
	AudioGraphNodePort m_Index; // 0x18
	AudioGraphNodePort m_Out; // 0x20
}; // size = 0x28

#endif // FBGEN_SimpleValueSelectorNodeData_H
