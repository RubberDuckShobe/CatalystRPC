//
// Generated with FrostbiteGen by Chod
// File: SDK\AdsrNodeData.h
// Created: Wed Mar 10 19:08:48 2021
//

#ifndef FBGEN_AdsrNodeData_H
#define FBGEN_AdsrNodeData_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodeData.h"

class AdsrNodeData :
	public AudioGraphNodeData // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3890;
	}
	AudioGraphNodePort m_Trigger; // 0x10
	AudioGraphNodePort m_Release; // 0x18
	AudioGraphNodePort m_A; // 0x20
	AudioGraphNodePort m_D; // 0x28
	AudioGraphNodePort m_S; // 0x30
	AudioGraphNodePort m_R; // 0x38
	AudioGraphNodePort m_Scale; // 0x40
	AudioGraphNodePort m_Value; // 0x48
	AudioGraphNodePort m_TriggerOutput; // 0x50
	AudioGraphNodePort m_Finished; // 0x58
	bool m_AlwaysStartFromZero; // 0x60
	unsigned char _0x61[0x7];
}; // size = 0x68

#endif // FBGEN_AdsrNodeData_H
