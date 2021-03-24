//
// Generated with FrostbiteGen by Chod
// File: SDK\KeepAliveNodeData.h
// Created: Wed Mar 10 19:06:23 2021
//

#ifndef FBGEN_KeepAliveNodeData_H
#define FBGEN_KeepAliveNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class KeepAliveNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2150;
	}
	AudioGraphNodePort m_KeepAlive; // 0x10
}; // size = 0x18

#endif // FBGEN_KeepAliveNodeData_H
