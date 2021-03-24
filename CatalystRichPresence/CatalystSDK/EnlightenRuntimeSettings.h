//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenRuntimeSettings.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EnlightenRuntimeSettings_H
#define FBGEN_EnlightenRuntimeSettings_H

#include "Vec3.h"
#include "Guid.h"
#include "SystemSettings.h"

class EnlightenRuntimeSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428429D0;
	}
	Vec3 m_AlbedoDefaultColor; // 0x20
	Guid m_SaveRadiosityTexturesDataAssetGuid; // 0x30
	float m_TemporalCoherenceThreshold; // 0x40
	float m_MaxPerFrameTemporalSolveTime; // 0x44
	unsigned int m_FullResolveLateAddIterations; // 0x48
	float m_DistancePriority; // 0x4c
	float m_FrustumPriority; // 0x50
	float m_SkyBoxScale; // 0x54
	float m_MaxPerFrameSolveTime; // 0x58
	float m_MaxPerFrameSolveTimeLimitedBudget; // 0x5c
	float m_MaxPerFrameSolveTimeMaximumBudget; // 0x60
	unsigned int m_MinSystemUpdateCount; // 0x64
	unsigned int m_JobCount; // 0x68
	unsigned int m_JobCountLimitedBudget; // 0x6c
	unsigned int m_JobCountMaximumBudget; // 0x70
	unsigned int m_LightProbeMaxSourceSolveCount; // 0x74
	unsigned int m_LightProbeMaxInstanceUpdateCount; // 0x78
	unsigned int m_LightProbeTableCellSize; // 0x7c
	float m_LocalLightForceRadius; // 0x80
	int m_DrawDebugMeshLod; // 0x84
	int m_DrawDebugSystemDependenciesEnable; // 0x88
	int m_DrawDebugSystemBoundingBoxEnable; // 0x8c
	float m_DrawDebugLightProbeSize; // 0x90
	float m_DrawDebugLightProbeCullDistance; // 0x94
	int m_DrawDebugTextureIndex; // 0x98
	unsigned char _0x9c[0x4];
	const char* m_DrawDebugTextureName; // 0xa0
	const char* m_FullResolveIteratorForceSystemUpdateName; // 0xa8
	bool m_Enable; // 0xb0
	bool m_ForceDynamic; // 0xb1
	bool m_ForceUpdateStaticLightingBuffersEnable; // 0xb2
	bool m_SaveRadiosityTexturesEnable; // 0xb3
	bool m_JobsEnable; // 0xb4
	bool m_KickJobEnable; // 0xb5
	bool m_ShadowsEnable; // 0xb6
	bool m_SpotLightShadowsEnable; // 0xb7
	bool m_CompensateSunShadowHeightScale; // 0xb8
	bool m_LightMapsEnable; // 0xb9
	bool m_LightProbeEnable; // 0xba
	bool m_LightProbeForceUpdate; // 0xbb
	bool m_LightProbeJobsEnable; // 0xbc
	bool m_LocalLightsEnable; // 0xbd
	bool m_LocalLightCullingEnable; // 0xbe
	bool m_LocalLightCustumFalloff; // 0xbf
	bool m_DrawDebugEntities; // 0xc0
	bool m_DrawDebugSystemsEnable; // 0xc1
	bool m_DrawDebugLightProbes; // 0xc2
	bool m_DrawDebugLightProbeGrid; // 0xc3
	bool m_DrawDebugLightProbeOcclusion; // 0xc4
	bool m_DrawDebugLightProbeStats; // 0xc5
	bool m_DrawDebugLightProbeBoundingBoxes; // 0xc6
	bool m_DrawSolveTaskPerformanceSummary; // 0xc7
	bool m_DrawSolveTaskPerformanceDetails; // 0xc8
	bool m_DrawDebugColoringEnable; // 0xc9
	bool m_DrawDebugFullResolveIterator; // 0xca
	bool m_DrawDebugExtendedFullResolveIterator; // 0xcb
	bool m_FullResolveIteratorForceSystemUpdateTrigger; // 0xcc
	bool m_DrawDebugBackFaces; // 0xcd
	bool m_DrawDebugTargetMeshes; // 0xce
	bool m_DrawDebugDusterPositions; // 0xcf
	bool m_DrawDebugClusters; // 0xd0
	bool m_DrawWarningsEnable; // 0xd1
	bool m_AlbedoForceUpdateEnable; // 0xd2
	bool m_AlbedoForceColorEnable; // 0xd3
	bool m_TerrainMapEnable; // 0xd4
	bool m_EmissiveEnable; // 0xd5
	bool m_DebugMeshesEnable; // 0xd6
	bool m_ValidationEnable; // 0xd7
	unsigned char _0xd8[0x8];
}; // size = 0xe0

#endif // FBGEN_EnlightenRuntimeSettings_H
