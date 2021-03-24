//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleTransformNodeData.h
// Created: Wed Mar 10 19:01:25 2021
//

#ifndef FBGEN_SimpleTransformNodeData_H
#define FBGEN_SimpleTransformNodeData_H

#include "AudioGraphNodePort.h"
#include "SimpleTransformOperation.h"
#include "AngleUnit.h"
#include "AudioGraphNodeData.h"

class SimpleTransformNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2570;
	}
	AudioGraphNodePort m_X; // 0x10
	AudioGraphNodePort m_Y; // 0x18
	AudioGraphNodePort m_Z; // 0x20
	SimpleTransformOperation m_Operation; // 0x28
	AngleUnit m_AngleUnit; // 0x2c
}; // size = 0x30

#endif // FBGEN_SimpleTransformNodeData_H
