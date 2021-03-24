//
// Generated with FrostbiteGen by Chod
// File: SDK\LfoNodeData.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LfoNodeData_H
#define FBGEN_LfoNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class LfoNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3290;
	}
	AudioGraphNodePort m_Hz; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	float m_Min; // 0x28
	float m_Max; // 0x2c
	bool m_StartAtRandomValue; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_LfoNodeData_H
