//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureCompressSettings.h
// Created: Wed Mar 10 19:00:22 2021
//

#ifndef FBGEN_TextureCompressSettings_H
#define FBGEN_TextureCompressSettings_H

#include "TextureCompressQualityMode.h"
#include "DataContainer.h"

class TextureCompressSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837D00;
	}
	TextureCompressQualityMode m_ViewMode; // 0x10
	unsigned int m_TextureCompressJobPoolSize; // 0x14
	float m_DebugDrawAlphaOverlayScale; // 0x18
	bool m_DebugDrawEnable; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_TextureCompressSettings_H
