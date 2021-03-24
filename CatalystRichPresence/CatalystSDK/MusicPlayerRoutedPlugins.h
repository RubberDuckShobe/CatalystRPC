//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayerRoutedPlugins.h
// Created: Wed Mar 10 19:05:41 2021
//

#ifndef FBGEN_MusicPlayerRoutedPlugins_H
#define FBGEN_MusicPlayerRoutedPlugins_H

#include "Array.h"
#include "SoundGraphPluginRef.h"
struct MusicPlayerRoutedPlugins
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0788;
	}
	Array<SoundGraphPluginRef> m_Route; // 0x0
	SoundGraphPluginRef m_SndPlayer; // 0x8
	SoundGraphPluginRef m_Rechannel; // 0xb
	SoundGraphPluginRef m_Resample; // 0xe
	SoundGraphPluginRef m_Pause; // 0x11
	SoundGraphPluginRef m_Gain; // 0x14
	unsigned char _0x17[0x1];
}; // size = 0x18

#endif // FBGEN_MusicPlayerRoutedPlugins_H
