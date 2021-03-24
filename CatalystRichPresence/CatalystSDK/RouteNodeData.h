//
// Generated with FrostbiteGen by Chod
// File: SDK\RouteNodeData.h
// Created: Wed Mar 10 19:02:33 2021
//

#ifndef FBGEN_RouteNodeData_H
#define FBGEN_RouteNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class RouteNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8A00;
	}
	AudioGraphNodePort m_In; // 0x10
	Array<RouteEntry*> m_Routes; // 0x18
}; // size = 0x20

#endif // FBGEN_RouteNodeData_H
