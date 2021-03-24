//
// Generated with FrostbiteGen by Chod
// File: SDK\DynamicTextureAtlasSettings.h
// Created: Wed Mar 10 19:07:04 2021
//

#ifndef FBGEN_DynamicTextureAtlasSettings_H
#define FBGEN_DynamicTextureAtlasSettings_H

#include "DataContainer.h"

class DynamicTextureAtlasSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834C70;
	}
	unsigned int m_EmitterBaseWidth; // 0x10
	unsigned int m_EmitterBaseHeight; // 0x14
	unsigned int m_EmitterBaseMipmapCount; // 0x18
	unsigned int m_EmitterBaseSkipmipsCount; // 0x1c
	unsigned int m_EmitterNormalWidth; // 0x20
	unsigned int m_EmitterNormalHeight; // 0x24
	unsigned int m_EmitterNormalMipmapCount; // 0x28
	unsigned int m_EmitterNormalSkipmipsCount; // 0x2c
	float m_EmitterBasePixelBorder; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_DynamicTextureAtlasSettings_H
