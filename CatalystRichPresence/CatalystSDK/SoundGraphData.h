//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundGraphData.h
// Created: Wed Mar 10 19:01:14 2021
//

#ifndef FBGEN_SoundGraphData_H
#define FBGEN_SoundGraphData_H

#include "SoundGraphInfo.h"
#include "Array.h"
#include "AudioGraphData.h"

class SoundGraphData :
	public AudioGraphData // size = 0x38
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8580;
	}
	SoundGraphInfo m_Info; // 0x38
	Array<AudioGraphParameter*> m_InputParameters; // 0x70
	Array<AudioGraphParameter*> m_OutputParameters; // 0x78
	Array<AudioGraphEvent*> m_InputEvents; // 0x80
	Array<AudioGraphEvent*> m_OutputEvents; // 0x88
}; // size = 0x90

#endif // FBGEN_SoundGraphData_H
