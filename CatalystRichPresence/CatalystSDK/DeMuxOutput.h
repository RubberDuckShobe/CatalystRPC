//
// Generated with FrostbiteGen by Chod
// File: SDK\DeMuxOutput.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DeMuxOutput_H
#define FBGEN_DeMuxOutput_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class DeMuxOutput :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D34D0;
	}
	AudioGraphNodePort m_Trigger; // 0x10
}; // size = 0x18

#endif // FBGEN_DeMuxOutput_H
