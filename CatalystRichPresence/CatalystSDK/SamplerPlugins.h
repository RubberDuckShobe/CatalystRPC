//
// Generated with FrostbiteGen by Chod
// File: SDK\SamplerPlugins.h
// Created: Wed Mar 10 19:02:32 2021
//

#ifndef FBGEN_SamplerPlugins_H
#define FBGEN_SamplerPlugins_H

#include "SoundGraphPluginRef.h"
struct SamplerPlugins
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C6F20;
	}
	SoundGraphPluginRef m_SndPlayer; // 0x0
	SoundGraphPluginRef m_Resample; // 0x3
	SoundGraphPluginRef m_Pause; // 0x6
	SoundGraphPluginRef m_Gain; // 0x9
}; // size = 0xc

#endif // FBGEN_SamplerPlugins_H
