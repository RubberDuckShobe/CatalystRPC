//
// Generated with FrostbiteGen by Chod
// File: SDK\DivisibleLoopPlayerNodeData.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DivisibleLoopPlayerNodeData_H
#define FBGEN_DivisibleLoopPlayerNodeData_H

#include "SoundWaveAsset.h"
#include "AudioGraphNodePort.h"
#include "Array.h"
#include "AudioGraphNodeData.h"

class DivisibleLoopPlayerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C9720;
	}
	AudioGraphNodePort m_Start; // 0x10
	AudioGraphNodePort m_Stop; // 0x18
	AudioGraphNodePort m_Amplitude; // 0x20
	AudioGraphNodePort m_FreezeSegment; // 0x28
	AudioGraphNodePort m_Output; // 0x30
	SoundWaveAsset* m_Wave; // 0x38
	AudioGraphNodePort m_ExternalWave; // 0x40
	Array<DivisibleLoopPlayerPlugins> m_Plugins; // 0x48
	float m_CrossFadeLength; // 0x50
	bool m_StartAtRandomPosition; // 0x54
	unsigned char _0x55[0x3];
}; // size = 0x58

#endif // FBGEN_DivisibleLoopPlayerNodeData_H
