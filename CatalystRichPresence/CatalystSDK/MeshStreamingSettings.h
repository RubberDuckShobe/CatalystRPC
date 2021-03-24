//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshStreamingSettings.h
// Created: Wed Mar 10 19:05:54 2021
//

#ifndef FBGEN_MeshStreamingSettings_H
#define FBGEN_MeshStreamingSettings_H

#include "DataContainer.h"

class MeshStreamingSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428340D0;
	}
	float m_PrioAmortizationMillis; // 0x10
	unsigned int m_MaxUnloadCountPerFrame; // 0x14
	unsigned int m_PoolSize; // 0x18
	unsigned int m_PoolHeadroomSize; // 0x1c
	unsigned int m_PoolMaxAllocCount; // 0x20
	unsigned int m_DefragTransferLimit; // 0x24
	unsigned int m_DefragSearchLimit; // 0x28
	unsigned int m_DefragJobCount; // 0x2c
	int m_ForceLod; // 0x30
	unsigned int m_MaxPendingLoadCount; // 0x34
	float m_DistanceMin; // 0x38
	unsigned int m_ListViewPageIndex; // 0x3c
	unsigned int m_ListViewSortOrder; // 0x40
	unsigned char _0x44[0x4];
	const char* m_DumpLoadedListFileName; // 0x48
	const char* m_DumpInstanceListFileName; // 0x50
	unsigned int m_ReservedPositionedInstanceCount; // 0x58
	unsigned int m_ReservedDistancedInstanceCount; // 0x5c
	bool m_Enable; // 0x60
	bool m_PrioAmortizationEnabled; // 0x61
	bool m_UpdateEnable; // 0x62
	bool m_UpdateJobEnable; // 0x63
	bool m_PriorityJobEnable; // 0x64
	bool m_PrioritySpuJobEnable; // 0x65
	bool m_UseSlowTexturePrio; // 0x66
	bool m_DynamicLoadingEnable; // 0x67
	bool m_InstantUnloadingEnable; // 0x68
	bool m_AsyncCreatesEnable; // 0x69
	bool m_DxImmutableUsageEnable; // 0x6a
	bool m_OverridePoolSizes; // 0x6b
	bool m_DefragEnable; // 0x6c
	bool m_DefragTransfersEnable; // 0x6d
	bool m_PrioritizeVisibleMeshesFirstEnable; // 0x6e
	bool m_PrioritizeVisibleLodsFirstEnable; // 0x6f
	bool m_PrioritizeVisibleLoadsEnable; // 0x70
	bool m_PrioritizeTexturesEnable; // 0x71
	bool m_HighestPriorityEnable; // 0x72
	bool m_PrioritizeNearestPointEnable; // 0x73
	bool m_DrawInstanceBoxesEnable; // 0x74
	bool m_DrawStatsEnable; // 0x75
	bool m_DrawMissingListEnable; // 0x76
	bool m_DrawPriorityListEnable; // 0x77
	bool m_DrawLoadingListEnable; // 0x78
	bool m_DrawMeshListEnable; // 0x79
	bool m_DrawNonStreamedListEnable; // 0x7a
	bool m_DumpLoadedList; // 0x7b
	bool m_DumpInstanceList; // 0x7c
	bool m_DumpPoolAllocations; // 0x7d
	bool m_UseConditionalStreaming; // 0x7e
	unsigned char _0x7f[0x1];
}; // size = 0x80

#endif // FBGEN_MeshStreamingSettings_H
