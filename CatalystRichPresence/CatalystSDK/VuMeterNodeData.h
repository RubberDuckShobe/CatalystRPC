//
// Generated with FrostbiteGen by Chod
// File: SDK\VuMeterNodeData.h
// Created: Wed Mar 10 18:58:55 2021
//

#ifndef FBGEN_VuMeterNodeData_H
#define FBGEN_VuMeterNodeData_H

#include "AudioGraphNodePort.h"
#include "VuMeterMode.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodeData.h"

class VuMeterNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8700;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Out; // 0x18
	AudioGraphNodePort m_FrontLeft; // 0x20
	AudioGraphNodePort m_Center; // 0x28
	AudioGraphNodePort m_FrontRight; // 0x30
	AudioGraphNodePort m_RearLeft; // 0x38
	AudioGraphNodePort m_RearRight; // 0x40
	AudioGraphNodePort m_Lfe; // 0x48
	VuMeterMode m_Mode; // 0x50
	int m_Efficiency; // 0x54
	int m_VUMeterXPos; // 0x58
	int m_VUMeterYPos; // 0x5c
	SoundGraphPluginRef m_Plugin; // 0x60
	bool m_RenderVUMeterBars; // 0x63
	unsigned char _0x64[0x4];
}; // size = 0x68

#endif // FBGEN_VuMeterNodeData_H
