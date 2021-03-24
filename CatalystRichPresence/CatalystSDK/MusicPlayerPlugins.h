//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayerPlugins.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPlayerPlugins_H
#define FBGEN_MusicPlayerPlugins_H

#include "SoundGraphPluginRef.h"
struct MusicPlayerPlugins
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D07A8;
	}
	SoundGraphPluginRef m_SndPlayer; // 0x0
	SoundGraphPluginRef m_Rechannel; // 0x3
	SoundGraphPluginRef m_Resample; // 0x6
	SoundGraphPluginRef m_Pause; // 0x9
	SoundGraphPluginRef m_Gain; // 0xc
}; // size = 0xf

#endif // FBGEN_MusicPlayerPlugins_H
