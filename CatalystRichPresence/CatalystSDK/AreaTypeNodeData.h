//
// Generated with FrostbiteGen by Chod
// File: SDK\AreaTypeNodeData.h
// Created: Wed Mar 10 19:08:39 2021
//

#ifndef FBGEN_AreaTypeNodeData_H
#define FBGEN_AreaTypeNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class AreaTypeNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1FD0;
	}
	AudioGraphNodePort m_Check; // 0x10
	AudioGraphNodePort m_Result; // 0x18
	AudioGraphNodePort m_AreaType; // 0x20
}; // size = 0x28

#endif // FBGEN_AreaTypeNodeData_H
