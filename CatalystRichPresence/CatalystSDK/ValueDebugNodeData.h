//
// Generated with FrostbiteGen by Chod
// File: SDK\ValueDebugNodeData.h
// Created: Wed Mar 10 18:59:32 2021
//

#ifndef FBGEN_ValueDebugNodeData_H
#define FBGEN_ValueDebugNodeData_H

#include "Array.h"
#include "AudioGraphNodeData.h"

class ValueDebugNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D36B0;
	}
	Array<DebugValueInput*> m_Values; // 0x10
	bool m_Enabled; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_ValueDebugNodeData_H
