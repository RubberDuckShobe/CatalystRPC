//
// Generated with FrostbiteGen by Chod
// File: SDK\CompressorNodeData.h
// Created: Wed Mar 10 19:07:36 2021
//

#ifndef FBGEN_CompressorNodeData_H
#define FBGEN_CompressorNodeData_H

#include "AudioGraphNodePort.h"
#include "CompressorChannelMode.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class CompressorNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C99C0;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Sidechain; // 0x18
	AudioGraphNodePort m_Threshold; // 0x20
	AudioGraphNodePort m_Ratio; // 0x28
	AudioGraphNodePort m_AttackTime; // 0x30
	AudioGraphNodePort m_ReleaseTime; // 0x38
	AudioGraphNodePort m_UseSidechain; // 0x40
	AudioGraphNodePort m_Out; // 0x48
	CompressorChannelMode m_ChannelMode; // 0x50
	SoundGraphPluginRef m_Plugin; // 0x54
	unsigned char _0x57[0x1];
}; // size = 0x58

#endif // FBGEN_CompressorNodeData_H
