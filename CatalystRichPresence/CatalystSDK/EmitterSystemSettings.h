//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterSystemSettings.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EmitterSystemSettings_H
#define FBGEN_EmitterSystemSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class EmitterSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DA880;
	}
	unsigned int m_SkipUpdateMaxCount; // 0x10
	int m_ForceJobCount; // 0x14
	float m_TimeScale; // 0x18
	float m_GlobalResetStartTimeInterval; // 0x1c
	unsigned int m_CollisionRayCastMaxCount; // 0x20
	unsigned int m_ProximityPhysicsEntitiesMaxCount; // 0x24
	QualityLevel m_EmitterQualityLevel; // 0x28
	float m_TemplateTimeoutTime; // 0x2c
	float m_PreciseWindAndForceMaxDistance; // 0x30
	float m_TurbulenceMaxDistance; // 0x34
	float m_ScreenAreaCullingStart; // 0x38
	float m_ScreenAreaCullingEnd; // 0x3c
	float m_ScreenAreaCullingMinTotalArea; // 0x40
	float m_ScreenAreaCullingMaxTotalArea; // 0x44
	float m_ScreenAreaCullingMaxMultiplier; // 0x48
	float m_ProcessJobYieldTime; // 0x4c
	float m_VisibleJobYieldTime; // 0x50
	unsigned int m_DrawStats; // 0x54
	unsigned int m_DrawMemStats; // 0x58
	unsigned int m_DrawBoundingBoxes; // 0x5c
	float m_MinScreenArea; // 0x60
	unsigned int m_DrawDebugAtlasMiplevel; // 0x64
	int m_DrawDebugAtlasTextureIndex; // 0x68
	int m_DrawDebugEmitterExclusionVolumes; // 0x6c
	int m_DrawDebugAtlasPageIndex; // 0x70
	unsigned char _0x74[0x4];
	const char* m_SystemShadersPath; // 0x78
	const char* m_SystemVSFPath; // 0x80
	int m_QuadTechnique; // 0x88
	float m_QuadNearFadeDistance; // 0x8c
	unsigned int m_QuadMaxCount; // 0x90
	float m_MeshCullingDistance; // 0x94
	unsigned int m_MeshDrawCountLimit; // 0x98
	float m_MeshStreamingPriorityMultiplier; // 0x9c
	unsigned int m_MeshMaxCount; // 0xa0
	bool m_Enable; // 0xa4
	bool m_UpdateJobEnable; // 0xa5
	bool m_EnableFixedTimeStep; // 0xa6
	bool m_EnableFixedDelta; // 0xa7
	bool m_EnableJobs; // 0xa8
	bool m_CollisionRayCastEnable; // 0xa9
	bool m_DrawDebugRayCastCollision; // 0xaa
	bool m_MeshEmitterVelocityVectorEnable; // 0xab
	bool m_EnableRendering; // 0xac
	bool m_CollectPerformanceStats; // 0xad
	bool m_HideInactiveStats; // 0xae
	bool m_SaveListActiveEmitters; // 0xaf
	bool m_DrawEmitterName; // 0xb0
	bool m_ZBufferCullEnable; // 0xb1
	bool m_DrawProjectedBoxes; // 0xb2
	bool m_DrawTransforms; // 0xb3
	bool m_DrawDebugBaseAtlas; // 0xb4
	bool m_DrawDebugNormalAtlas; // 0xb5
	bool m_DrawDebugAtlasAlpha; // 0xb6
	bool m_DrawDebugEmitterSunTransmittanceMapGroup; // 0xb7
	bool m_DrawDebugEmitterSunTransmittanceMapsLinks; // 0xb8
	bool m_ForceSunTransmittanceOnAllEmitters; // 0xb9
	bool m_EmitterRenderSunTransmittanceViewsFirst; // 0xba
	bool m_DrawDebugEmitterVertexBufferUsage; // 0xbb
	bool m_EmitterGpuLightingEnable; // 0xbc
	bool m_EmitterGpuLightingPipelineShadersEnabled; // 0xbd
	bool m_QuadClipScaleEnable; // 0xbe
	bool m_QuadEnableRendering; // 0xbf
	bool m_QuadNiceRenderingEnable; // 0xc0
	bool m_QuadSimpleRenderingEnable; // 0xc1
	bool m_QuadEnableOpaque; // 0xc2
	bool m_QuadEnableCustomShader; // 0xc3
	bool m_QuadColorShaderCostsEnable; // 0xc4
	bool m_QuadEnableSorting; // 0xc5
	bool m_QuadEnableWireframe; // 0xc6
	bool m_QuadHalfResEnable; // 0xc7
	bool m_QuadGroupsJoinAll; // 0xc8
	bool m_QuadGroupsJoinNone; // 0xc9
	bool m_QuadGroupsJoinNiceAndSimple; // 0xca
	bool m_QuadVertexShadowsEnable; // 0xcb
	bool m_QuadCloudVertexShadowsEnable; // 0xcc
	bool m_QuadPlanarReflectionEnable; // 0xcd
	bool m_QuadPointLightsEnable; // 0xce
	bool m_QuadSpotLightsEnable; // 0xcf
	bool m_QuadResourceSyncJobEnable; // 0xd0
	bool m_MeshRenderingEnable; // 0xd1
	bool m_MeshDrawTransforms; // 0xd2
	bool m_MeshDrawBoundingBoxes; // 0xd3
	bool m_MeshShadowEnable; // 0xd4
	bool m_MeshPlanarReflectionEnable; // 0xd5
	bool m_MeshDrawCullStats; // 0xd6
	bool m_SkipRenderIfProbeIsUninitialized; // 0xd7
}; // size = 0xd8

#endif // FBGEN_EmitterSystemSettings_H
