//
// Generated with FrostbiteGen by Chod
// File: SDK\ValueCacheNodeData.h
// Created: Wed Mar 10 18:59:32 2021
//

#ifndef FBGEN_ValueCacheNodeData_H
#define FBGEN_ValueCacheNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class ValueCacheNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2030;
	}
	AudioGraphNodePort m_Save; // 0x10
	AudioGraphNodePort m_Value; // 0x18
	AudioGraphNodePort m_Out; // 0x20
	float m_DefaultValue; // 0x28
	bool m_SetInitialValueAsDefault; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_ValueCacheNodeData_H
