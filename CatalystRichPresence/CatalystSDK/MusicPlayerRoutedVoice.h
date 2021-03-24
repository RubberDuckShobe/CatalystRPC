//
// Generated with FrostbiteGen by Chod
// File: SDK\MusicPlayerRoutedVoice.h
// Created: Wed Mar 10 19:05:40 2021
//

#ifndef FBGEN_MusicPlayerRoutedVoice_H
#define FBGEN_MusicPlayerRoutedVoice_H

#include "Array.h"
struct MusicPlayerRoutedVoice
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D0748;
	}
	Array<MusicPlayerRoutedPlugins> m_RoutedPlugins; // 0x0
	Array<MusicPlayerRoutedTargetPlugins> m_RoutedTargetPlugins; // 0x8
	unsigned char m_LayerCount; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_MusicPlayerRoutedVoice_H
