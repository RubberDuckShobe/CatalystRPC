//
// Generated with FrostbiteGen by Chod
// File: SDK\NumberGeneratorNodeData.h
// Created: Wed Mar 10 19:05:32 2021
//

#ifndef FBGEN_NumberGeneratorNodeData_H
#define FBGEN_NumberGeneratorNodeData_H

#include "NumberGeneratorMode.h"
#include "AudioGraphNodePort.h"
#include "NumberGeneratorNodeVersion.h"
#include "AudioGraphNodeData.h"

class NumberGeneratorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2930;
	}
	AudioGraphNodePort m_Trigger; // 0x10
	float m_Min; // 0x18
	float m_Max; // 0x1c
	NumberGeneratorMode m_Mode; // 0x20
	AudioGraphNodePort m_Y; // 0x24
	NumberGeneratorNodeVersion m_Version; // 0x2c
}; // size = 0x30

#endif // FBGEN_NumberGeneratorNodeData_H
