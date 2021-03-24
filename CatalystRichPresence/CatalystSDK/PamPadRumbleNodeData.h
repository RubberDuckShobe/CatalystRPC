//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPadRumbleNodeData.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPadRumbleNodeData_H
#define FBGEN_PamPadRumbleNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class PamPadRumbleNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428804D0;
	}
	AudioGraphNodePort m_RumbleHigh; // 0x10
	AudioGraphNodePort m_RumbleLow; // 0x18
}; // size = 0x20

#endif // FBGEN_PamPadRumbleNodeData_H
