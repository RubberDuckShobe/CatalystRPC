//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayerNodeData.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPlayerNodeData_H
#define FBGEN_MusicPlayerNodeData_H

#include "MusicBaseAsset.h"
#include "Array.h"
#include "OutputNodeData.h"
#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class MusicPlayerNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D52D0;
	}
	AudioGraphNodePort m_Pitch; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	AudioGraphNodePort m_Buffer; // 0x20
	AudioGraphNodePort m_Start; // 0x28
	AudioGraphNodePort m_Stop; // 0x30
	AudioGraphNodePort m_Pause; // 0x38
	AudioGraphNodePort m_Unpause; // 0x40
	AudioGraphNodePort m_Output; // 0x48
	AudioGraphNodePort m_Overlay; // 0x50
	AudioGraphNodePort m_IsBuffered; // 0x58
	AudioGraphNodePort m_IsFinished; // 0x60
	MusicBaseAsset* m_Asset; // 0x68
	unsigned int m_DefaultStartEventNameHash; // 0x70
	unsigned char _0x74[0x4];
	Array<MusicPlayerEntry*> m_Entries; // 0x78
	Array<MusicPlayerPlugins> m_Plugins; // 0x80
	Array<MusicPlayerRoutedVoice> m_RoutedVoices; // 0x88
	OutputNodeData* m_PitchSource; // 0x90
	AudioGraphNodePort m_OnBeat; // 0x98
	AudioGraphNodePort m_OnBar; // 0xa0
	AudioGraphNodePort m_OnTransition; // 0xa8
}; // size = 0xb0

#endif // FBGEN_MusicPlayerNodeData_H
