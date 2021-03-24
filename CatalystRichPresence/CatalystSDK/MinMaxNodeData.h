//
// Generated with FrostbiteGen by Chod
// File: SDK\MinMaxNodeData.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MinMaxNodeData_H
#define FBGEN_MinMaxNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MinMaxNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2B10;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_Y; // 0x18
	AudioGraphNodePort m_Max; // 0x20
	AudioGraphNodePort m_Min; // 0x28
}; // size = 0x30

#endif // FBGEN_MinMaxNodeData_H
