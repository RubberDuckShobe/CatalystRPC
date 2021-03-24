//
// Generated with FrostbiteGen by Chod
// File: SDK\ReceiveEntry.h
// Created: Wed Mar 10 19:02:41 2021
//

#ifndef FBGEN_ReceiveEntry_H
#define FBGEN_ReceiveEntry_H

#include "AudioGraphNodePort.h"
#include "AudioGraphParameter.h"
#include "AudioGraphNodePortGroup.h"

class ReceiveEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D27B0;
	}
	AudioGraphNodePort m_Out; // 0x10
	AudioGraphParameter* m_Source; // 0x18
	float m_Parameter; // 0x20
	float m_SavedValue; // 0x24
}; // size = 0x28

#endif // FBGEN_ReceiveEntry_H
