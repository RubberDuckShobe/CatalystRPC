//
// Generated with FrostbiteGen by Chod
// File: SDK\SequenceGeneratorNodeData.h
// Created: Wed Mar 10 19:02:29 2021
//

#ifndef FBGEN_SequenceGeneratorNodeData_H
#define FBGEN_SequenceGeneratorNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class SequenceGeneratorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D25D0;
	}
	AudioGraphNodePort m_Trigger; // 0x10
	AudioGraphNodePort m_Reset; // 0x18
	AudioGraphNodePort m_Min; // 0x20
	AudioGraphNodePort m_Max; // 0x28
	AudioGraphNodePort m_Step; // 0x30
	AudioGraphNodePort m_Value; // 0x38
	bool m_UpdateValueOnEvents; // 0x40
	unsigned char _0x41[0x7];
}; // size = 0x48

#endif // FBGEN_SequenceGeneratorNodeData_H
