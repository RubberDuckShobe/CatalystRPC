//
// Generated with FrostbiteGen by Chod
// File: SDK\ScaleClampNodeData.h
// Created: Wed Mar 10 19:02:31 2021
//

#ifndef FBGEN_ScaleClampNodeData_H
#define FBGEN_ScaleClampNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class ScaleClampNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D26F0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_InMin; // 0x18
	AudioGraphNodePort m_InMax; // 0x20
	AudioGraphNodePort m_OutMin; // 0x28
	AudioGraphNodePort m_OutMax; // 0x30
	AudioGraphNodePort m_Out; // 0x38
}; // size = 0x40

#endif // FBGEN_ScaleClampNodeData_H
