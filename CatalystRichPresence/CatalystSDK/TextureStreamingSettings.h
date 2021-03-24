//
// Generated with FrostbiteGen by Chod
// File: SDK\TextureStreamingSettings.h
// Created: Wed Mar 10 19:00:20 2021
//

#ifndef FBGEN_TextureStreamingSettings_H
#define FBGEN_TextureStreamingSettings_H

#include "DataContainer.h"

class TextureStreamingSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834D30;
	}
	int m_ForceMipmap; // 0x10
	unsigned int m_MinMipmapCount; // 0x14
	unsigned int m_MaxMipmapCount; // 0x18
	float m_MipmapBias; // 0x1c
	unsigned int m_MaxTextureSizeKb; // 0x20
	float m_FadeMipmapTime; // 0x24
	unsigned int m_MinTextureSize; // 0x28
	unsigned int m_PoolSize; // 0x2c
	unsigned int m_PoolHeadroomSize; // 0x30
	unsigned int m_PoolMaxAllocCount; // 0x34
	unsigned int m_OnDemandPoolSize; // 0x38
	unsigned int m_OnDemandMaxAllocCount; // 0x3c
	unsigned int m_LoadingScreenPoolSize; // 0x40
	unsigned int m_DefragFrameTransferLimit; // 0x44
	unsigned int m_DefragFrameSearchLimit; // 0x48
	unsigned int m_DefragJobCount; // 0x4c
	unsigned int m_MaxPendingLoadCount; // 0x50
	unsigned int m_MaxPendingUnloadCount; // 0x54
	unsigned int m_MaxFrameTextureCreateSize; // 0x58
	unsigned int m_MaxFrameTextureCreateCount; // 0x5c
	float m_PriorityThreshold; // 0x60
	unsigned int m_ListViewPageIndex; // 0x64
	const char* m_DumpLoadedListFileName; // 0x68
	bool m_Enable; // 0x70
	bool m_UpdateEnable; // 0x71
	bool m_DynamicLoadingEnable; // 0x72
	bool m_ChunkLoadEnable; // 0x73
	bool m_InstantUnloadingEnable; // 0x74
	bool m_OnlyWantedInPool; // 0x75
	bool m_ForceWantedEnable; // 0x76
	bool m_LoadMipmapsEnable; // 0x77
	bool m_UploadMipmapsEnable; // 0x78
	bool m_UnloadInPlaceEnable; // 0x79
	bool m_TextureUpdateEnable; // 0x7a
	bool m_ImmutableUsageEnable; // 0x7b
	bool m_MipmapsEnable; // 0x7c
	bool m_FadeMipmapsEnable; // 0x7d
	bool m_OverridePoolSize; // 0x7e
	bool m_PoolEnable; // 0x7f
	bool m_DefragEnable; // 0x80
	bool m_DefragTransfersEnable; // 0x81
	bool m_DrawStatsEnable; // 0x82
	bool m_DrawTextureGroupStatsEnable; // 0x83
	bool m_DrawTextureFormatStatsEnable; // 0x84
	bool m_DrawLoadingListEnable; // 0x85
	bool m_DrawPriorityListEnable; // 0x86
	bool m_DumpLoadedList; // 0x87
	bool m_DumpPoolAllocations; // 0x88
	bool m_UseConditionalStreaming; // 0x89
	unsigned char _0x8a[0x6];
}; // size = 0x90

#endif // FBGEN_TextureStreamingSettings_H
