//
// Generated with FrostbiteGen by Chod
// File: SDK\RangeMapperNodeData.h
// Created: Wed Mar 10 19:02:43 2021
//

#ifndef FBGEN_RangeMapperNodeData_H
#define FBGEN_RangeMapperNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class RangeMapperNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2810;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	Array<RangeMapperEntry> m_Ranges; // 0x20
	float m_DefaultOutputValue; // 0x28
	bool m_DefaultOutputValueEnabled; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_RangeMapperNodeData_H
