//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureSettings.h
// Created: Wed Mar 10 19:00:21 2021
//

#ifndef FBGEN_TextureSettings_H
#define FBGEN_TextureSettings_H

#include "DataContainer.h"

class TextureSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834CD0;
	}
	unsigned int m_SkipMipmapCount; // 0x10
	bool m_LoadingEnabled; // 0x14
	bool m_RenderTexturesEnabled; // 0x15
	bool m_StreamableMipmapsEnable; // 0x16
	unsigned char _0x17[0x1];
}; // size = 0x18

#endif // FBGEN_TextureSettings_H
