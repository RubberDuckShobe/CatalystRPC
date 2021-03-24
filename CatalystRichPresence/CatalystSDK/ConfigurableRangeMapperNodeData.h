//
// Generated with FrostbiteGen by Chod
// File: SDK\ConfigurableRangeMapperNodeData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConfigurableRangeMapperNodeData_H
#define FBGEN_ConfigurableRangeMapperNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class ConfigurableRangeMapperNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C06F0;
	}
	AudioGraphNodePort m_InputValue; // 0x10
	AudioGraphNodePort m_OutputValue; // 0x18
	AudioGraphNodePort m_DefaultOutputValue; // 0x20
	Array<ConfigurableRangeMapperEntry*> m_Ranges; // 0x28
	bool m_DefaultOutputValueEnabled; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_ConfigurableRangeMapperNodeData_H
