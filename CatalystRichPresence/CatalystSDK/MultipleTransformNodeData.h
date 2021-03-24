//
// Generated with FrostbiteGen by Chod
// File: SDK\MultipleTransformNodeData.h
// Created: Wed Mar 10 19:05:42 2021
//

#ifndef FBGEN_MultipleTransformNodeData_H
#define FBGEN_MultipleTransformNodeData_H

#include "Array.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MultipleTransformNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D24B0;
	}
	AudioGraphNodePort m_X; // 0x10
	Array<MultipleTransformEntry*> m_Transforms; // 0x18
	AudioGraphNodePort m_Result; // 0x20
}; // size = 0x28

#endif // FBGEN_MultipleTransformNodeData_H
