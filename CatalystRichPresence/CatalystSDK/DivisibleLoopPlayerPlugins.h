//
// Generated with FrostbiteGen by Chod
// File: SDK\DivisibleLoopPlayerPlugins.h
// Created: Wed Mar 10 19:07:08 2021
//

#ifndef FBGEN_DivisibleLoopPlayerPlugins_H
#define FBGEN_DivisibleLoopPlayerPlugins_H

#include "SoundGraphPluginRef.h"
struct DivisibleLoopPlayerPlugins
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6F40;
	}
	SoundGraphPluginRef m_SndPlayer; // 0x0
	SoundGraphPluginRef m_Pause; // 0x3
	SoundGraphPluginRef m_Gain; // 0x6
	SoundGraphPluginRef m_GainFader; // 0x9
}; // size = 0xc

#endif // FBGEN_DivisibleLoopPlayerPlugins_H
