//
// Generated with FrostbiteGen by Chod
// File: SDK\MemoryLevelDescriptionComponent.h
// Created: Wed Mar 10 19:05:57 2021
//

#ifndef FBGEN_MemoryLevelDescriptionComponent_H
#define FBGEN_MemoryLevelDescriptionComponent_H

#include "PlatformScalableInt.h"
#include "LevelDescriptionComponent.h"

class MemoryLevelDescriptionComponent :
	public LevelDescriptionComponent // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280C110;
	}
	PlatformScalableInt m_TextureStreamingPoolSize; // 0x10
	PlatformScalableInt m_MeshStreamingPoolSize; // 0x34
	PlatformScalableInt m_EmitterBaseAtlasWidth; // 0x58
	PlatformScalableInt m_EmitterBaseAtlasHeight; // 0x7c
	PlatformScalableInt m_EmitterBaseAtlasMipmapCount; // 0xa0
	PlatformScalableInt m_EmitterNormalAtlasWidth; // 0xc4
	PlatformScalableInt m_EmitterNormalAtlasHeight; // 0xe8
	PlatformScalableInt m_EmitterNormalAtlasMipmapCount; // 0x10c
}; // size = 0x130

#endif // FBGEN_MemoryLevelDescriptionComponent_H
