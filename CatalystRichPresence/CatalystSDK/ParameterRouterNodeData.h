//
// Generated with FrostbiteGen by Chod
// File: SDK\ParameterRouterNodeData.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_ParameterRouterNodeData_H
#define FBGEN_ParameterRouterNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class ParameterRouterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D2090;
	}
	AudioGraphNodePort m_RouteIn; // 0x10
	AudioGraphNodePort m_RouteOut; // 0x18
	AudioGraphNodePort m_DefaultOut; // 0x20
	Array<ParameterRouterEntry*> m_ParameterRouterEntries; // 0x28
}; // size = 0x30

#endif // FBGEN_ParameterRouterNodeData_H
