//
// Generated with FrostbiteGen by Chod
// File: SDK\WaveSwitcherNodeData.h
// Created: Wed Mar 10 18:58:53 2021
//

#ifndef FBGEN_WaveSwitcherNodeData_H
#define FBGEN_WaveSwitcherNodeData_H

#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class WaveSwitcherNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8820;
	}
	AudioGraphNodePort m_Index; // 0x10
	AudioGraphNodePort m_Advance; // 0x18
	AudioGraphNodePort m_Wave; // 0x20
	AudioGraphNodePort m_IndexChanged; // 0x28
	Array<SoundWaveAsset*> m_Waves; // 0x30
	float m_DefaultIndex; // 0x38
	bool m_IsRandom; // 0x3c
	bool m_RandomStartIndex; // 0x3d
	unsigned char _0x3e[0x2];
}; // size = 0x40

#endif // FBGEN_WaveSwitcherNodeData_H
