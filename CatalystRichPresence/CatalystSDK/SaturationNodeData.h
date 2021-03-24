//
// Generated with FrostbiteGen by Chod
// File: SDK\SaturationNodeData.h
// Created: Wed Mar 10 19:02:32 2021
//

#ifndef FBGEN_SaturationNodeData_H
#define FBGEN_SaturationNodeData_H

#include "SaturationTypes.h"
#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class SaturationNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C05D0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Gain; // 0x18
	AudioGraphNodePort m_DCBias; // 0x20
	AudioGraphNodePort m_Level; // 0x28
	AudioGraphNodePort m_Mix; // 0x30
	SaturationTypes m_SaturationType; // 0x38
	AudioGraphNodePort m_Out; // 0x3c
	SoundGraphPluginRef m_SaturationPlugin; // 0x44
	unsigned char _0x47[0x1];
}; // size = 0x48

#endif // FBGEN_SaturationNodeData_H
