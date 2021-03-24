//
// Generated with FrostbiteGen by Chod
// File: SDK\MovieTextureAsset.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MovieTextureAsset_H
#define FBGEN_MovieTextureAsset_H

#include "Guid.h"
#include "Array.h"
#include "Asset.h"

class MovieTextureAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826460;
	}
	Guid m_ChunkGuid; // 0x18
	unsigned int m_ChunkSize; // 0x28
	Guid m_SubtitleChunkGuid; // 0x2c
	unsigned int m_SubtitleChunkSize; // 0x3c
	Array<MovieSubtitle> m_Subtitles; // 0x40
	bool m_HasLocalizedAudioTracks; // 0x48
	bool m_OverrideBackgroundMusic; // 0x49
	bool m_HasVp6; // 0x4a
	bool m_HasVp8; // 0x4b
	bool m_ForcePreloadEnable; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_MovieTextureAsset_H
