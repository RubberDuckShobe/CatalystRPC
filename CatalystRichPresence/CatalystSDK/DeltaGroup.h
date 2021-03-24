//
// Generated with FrostbiteGen by Chod
// File: SDK\DeltaGroup.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DeltaGroup_H
#define FBGEN_DeltaGroup_H

#include "AudioGraphNodePort.h"
#include "AudioGraphNodePortGroup.h"

class DeltaGroup :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3590;
	}
	AudioGraphNodePort m_In; // 0x10
	AudioGraphNodePort m_Delta; // 0x18
}; // size = 0x20

#endif // FBGEN_DeltaGroup_H
