//
// Generated with FrostbiteGen by Chod
// File: SDK\ValueSelectorNodeData.h
// Created: Wed Mar 10 18:59:32 2021
//

#ifndef FBGEN_ValueSelectorNodeData_H
#define FBGEN_ValueSelectorNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class ValueSelectorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2270;
	}
	Array<ValueSelectorEntry*> m_Inputs; // 0x10
	AudioGraphNodePort m_Value; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	float m_DefaultCaseValue; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ValueSelectorNodeData_H
