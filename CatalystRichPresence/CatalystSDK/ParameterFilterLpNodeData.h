//
// Generated with FrostbiteGen by Chod
// File: SDK\ParameterFilterLpNodeData.h
// Created: Wed Mar 10 19:03:19 2021
//

#ifndef FBGEN_ParameterFilterLpNodeData_H
#define FBGEN_ParameterFilterLpNodeData_H

#include "AudioGraphNodePort.h"
#include "ParameterFilterLpNodeVersion.h"
#include "AudioGraphNodeData.h"

class ParameterFilterLpNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D28D0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	AudioGraphNodePort m_Hz; // 0x20
	ParameterFilterLpNodeVersion m_Version; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ParameterFilterLpNodeData_H
