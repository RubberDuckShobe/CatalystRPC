//
// Generated with FrostbiteGen by Chod
// File: SDK\RouteEntry.h
// Created: Wed Mar 10 19:02:34 2021
//

#ifndef FBGEN_RouteEntry_H
#define FBGEN_RouteEntry_H

#include "AudioGraphNodePort.h"
#include "SoundGraphPluginRef.h"
#include "AudioGraphNodePortGroup.h"

class RouteEntry :
	public AudioGraphNodePortGroup // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8A60;
	}
	AudioGraphNodePort m_Output; // 0x10
	AudioGraphNodePort m_Amplitude; // 0x18
	SoundGraphPluginRef m_Plugin; // 0x20
	unsigned char _0x23[0x5];
}; // size = 0x28

#endif // FBGEN_RouteEntry_H
