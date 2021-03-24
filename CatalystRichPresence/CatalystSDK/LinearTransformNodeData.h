//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearTransformNodeData.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinearTransformNodeData_H
#define FBGEN_LinearTransformNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class LinearTransformNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3230;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_K; // 0x18
	AudioGraphNodePort m_M; // 0x20
	AudioGraphNodePort m_Y; // 0x28
}; // size = 0x30

#endif // FBGEN_LinearTransformNodeData_H
