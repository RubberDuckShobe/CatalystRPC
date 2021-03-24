//
// Generated with FrostbiteGen by Chod
// File: SDK\DeMuxNodeData.h
// Created: Wed Mar 10 19:07:19 2021
//

#ifndef FBGEN_DeMuxNodeData_H
#define FBGEN_DeMuxNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class DeMuxNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3470;
	}
	Array<DeMuxOutput*> m_Outputs; // 0x10
	AudioGraphNodePort m_Trigger; // 0x18
	AudioGraphNodePort m_Value; // 0x20
	bool m_WrapValue; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_DeMuxNodeData_H
