//
// Generated with FrostbiteGen by Chod
// File: SDK\ListenerAreaTypeNodeData.h
// Created: Wed Mar 10 19:06:13 2021
//

#ifndef FBGEN_ListenerAreaTypeNodeData_H
#define FBGEN_ListenerAreaTypeNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class ListenerAreaTypeNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D1F70;
	}
	AudioGraphNodePort m_AreaType; // 0x10
	int m_ListenerId; // 0x18
	bool m_UseDefaultListener; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_ListenerAreaTypeNodeData_H
