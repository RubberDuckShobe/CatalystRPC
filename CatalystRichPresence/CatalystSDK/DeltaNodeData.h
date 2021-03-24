//
// Generated with FrostbiteGen by Chod
// File: SDK\DeltaNodeData.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DeltaNodeData_H
#define FBGEN_DeltaNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class DeltaNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3530;
	}
	Array<DeltaGroup*> m_Deltas; // 0x10
}; // size = 0x18

#endif // FBGEN_DeltaNodeData_H
