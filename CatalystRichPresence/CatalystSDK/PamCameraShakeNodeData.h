//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCameraShakeNodeData.h
// Created: Wed Mar 10 19:05:04 2021
//

#ifndef FBGEN_PamCameraShakeNodeData_H
#define FBGEN_PamCameraShakeNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class PamCameraShakeNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428816D0;
	}
	AudioGraphNodePort m_Pitch; // 0x10
	AudioGraphNodePort m_Yaw; // 0x18
	AudioGraphNodePort m_Roll; // 0x20
}; // size = 0x28

#endif // FBGEN_PamCameraShakeNodeData_H
