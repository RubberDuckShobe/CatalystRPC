//
// Generated with FrostbiteGen by Chod
// File: SDK\ParameterRouterEntry.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_ParameterRouterEntry_H
#define FBGEN_ParameterRouterEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class ParameterRouterEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D20F0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
}; // size = 0x20

#endif // FBGEN_ParameterRouterEntry_H
