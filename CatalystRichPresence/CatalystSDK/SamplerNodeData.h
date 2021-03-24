//
// Generated with FrostbiteGen by Chod
// File: SDK\SamplerNodeData.h
// Created: Wed Mar 10 19:02:32 2021
//

#ifndef FBGEN_SamplerNodeData_H
#define FBGEN_SamplerNodeData_H

#include "Vec3.h"
#include "OffsetMode.h"
#include "AudioGraphNodePort.h"
#include "SoundWaveAsset.h"
#include "Array.h"
#include "OutputNodeData.h"
#include "SamplerNodeVersion.h"
#include "AudioGraphNodeData.h"

class SamplerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C89A0;
	}
	AudioGraphNodePort m_ExternalWave; // 0x10
	unsigned char _0x18[0x8];
	Vec3 m_SamplerDebugInfoColor; // 0x20
	Vec3 m_PropertiesDebugInfoColor; // 0x30
	Vec3 m_EventsDebugInfoColor; // 0x40
	AudioGraphNodePort m_Variation; // 0x50
	OffsetMode m_OffsetType; // 0x58
	AudioGraphNodePort m_Offset; // 0x5c
	AudioGraphNodePort m_Delay; // 0x64
	AudioGraphNodePort m_Pitch; // 0x6c
	AudioGraphNodePort m_Amplitude; // 0x74
	AudioGraphNodePort m_EnableStep; // 0x7c
	AudioGraphNodePort m_ShuffleSegments; // 0x84
	AudioGraphNodePort m_Buffer; // 0x8c
	AudioGraphNodePort m_Trigger; // 0x94
	AudioGraphNodePort m_Release; // 0x9c
	AudioGraphNodePort m_Step; // 0xa4
	AudioGraphNodePort m_Output; // 0xac
	AudioGraphNodePort m_Finished; // 0xb4
	AudioGraphNodePort m_Buffered; // 0xbc
	AudioGraphNodePort m_Position; // 0xc4
	unsigned char _0xcc[0x4];
	SoundWaveAsset* m_Wave; // 0xd0
	Array<SamplerPlugins> m_Plugins; // 0xd8
	OutputNodeData* m_PitchSource; // 0xe0
	SamplerNodeVersion m_Version; // 0xe8
	int m_DebugTextXPos; // 0xec
	int m_DebugTextYPos; // 0xf0
	float m_EventDisplayTime; // 0xf4
	bool m_Looping; // 0xf8
	bool m_InstantRelease; // 0xf9
	unsigned char m_LeadOut; // 0xfa
	bool m_EnableDebug; // 0xfb
	bool m_DebugInputConnections; // 0xfc
	bool m_DebugOutputConnections; // 0xfd
	unsigned char _0xfe[0x2];
}; // size = 0x100

#endif // FBGEN_SamplerNodeData_H
