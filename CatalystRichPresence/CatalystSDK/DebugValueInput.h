//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugValueInput.h
// Created: Wed Mar 10 19:07:16 2021
//

#ifndef FBGEN_DebugValueInput_H
#define FBGEN_DebugValueInput_H

#include "AudioGraphNodePort.h"
#include "DebugRenderType.h"
#include "AudioGraphNodePortGroup.h"

class DebugValueInput :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3710;
	}
	AudioGraphNodePort m_V; // 0x10
	const char* m_Name; // 0x18
	DebugRenderType m_RenderType; // 0x20
	float m_Min; // 0x24
	float m_Max; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_DebugValueInput_H
