//
// Generated with FrostbiteGen by Chod
// File: SDK\VisualTerrainSettings.h
// Created: Wed Mar 10 18:59:11 2021
//

#ifndef FBGEN_VisualTerrainSettings_H
#define FBGEN_VisualTerrainSettings_H

#include "TerrainRenderMode.h"
#include "QualityLevel.h"
#include "DataContainer.h"

class VisualTerrainSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283B780;
	}
	QualityLevel m_MeshScatteringQualityLevel; // 0x10
	TerrainRenderMode m_RenderMode; // 0x14
	unsigned int m_DebugColorsRangeMaxCount; // 0x18
	float m_TriangleSizeMin; // 0x1c
	float m_LodScale; // 0x20
	float m_LodCenterExtrapolationDistanceMax; // 0x24
	float m_LodCenterExtrapolationTime; // 0x28
	float m_TextureSkipMipSpeed; // 0x2c
	float m_TessellationPatchShrink; // 0x30
	unsigned int m_TessellationPatchFacesPerSide; // 0x34
	float m_TessellatedTriWidth; // 0x38
	float m_TessellatedTriWidthScaleForReflections; // 0x3c
	float m_TessellatedTriWidthScaleForShadows; // 0x40
	unsigned int m_TextureAtlasSampleCountXFactor; // 0x44
	unsigned int m_TextureAtlasSampleCountYFactor; // 0x48
	float m_TextureSamplesPerMeterMax; // 0x4c
	float m_TextureDetailFalloffFactor; // 0x50
	float m_TextureDetailFalloffDistance; // 0x54
	float m_TextureDetailFalloffCurve; // 0x58
	float m_TextureInvisibleDetailReductionFactor; // 0x5c
	float m_TextureOccludedDetailReductionFactor; // 0x60
	unsigned int m_TextureRenderJobCount; // 0x64
	unsigned int m_TextureRenderJobsLaunchedPerFrameCountMax; // 0x68
	unsigned int m_TextureTileSamplesPerSide; // 0x6c
	unsigned int m_TextureTileBorderWidth; // 0x70
	int m_TextureLevelOffset; // 0x74
	unsigned int m_TextureClodFrameCount; // 0x78
	float m_TextureClodCutoffPriority; // 0x7c
	unsigned int m_TextureStreamableTextureInstanceBufferSize; // 0x80
	unsigned int m_TextureCompressJobCount; // 0x84
	int m_TextureCompressionQuality; // 0x88
	float m_TextureDetailSlopeBoost; // 0x8c
	float m_TextureGenerationMipBias; // 0x90
	float m_TextureDirtyRetryRate; // 0x94
	int m_TextureForceDrawPass; // 0x98
	unsigned int m_TextureQuadsPerTileLevel; // 0x9c
	float m_DecalZPassDrawDistance; // 0xa0
	float m_DecalOffsetY; // 0xa4
	float m_Decal3dFarDrawDistanceScaleFactor; // 0xa8
	int m_DrawQuadtreeZoomIndex; // 0xac
	float m_PatchErrorFov; // 0xb0
	float m_ZPassDistance; // 0xb4
	float m_DebugOverlayGridSize; // 0xb8
	float m_DebugOverlayIsolineSpacing; // 0xbc
	unsigned int m_SlotReuseWaitCount; // 0xc0
	unsigned int m_BuildJobCount; // 0xc4
	float m_DynamicMaskDecalWidthScale; // 0xc8
	unsigned int m_MaxNonVisibleTextureUpdateCount; // 0xcc
	unsigned int m_PatchFacesPerSide; // 0xd0
	unsigned int m_TessellationFacesPerSideMin; // 0xd4
	unsigned int m_PatchSlotCount; // 0xd8
	unsigned int m_OccluderJobCount; // 0xdc
	unsigned int m_OccluderPatchFacesPerSide; // 0xe0
	float m_OccluderLodScale; // 0xe4
	float m_OccludedMinDistance; // 0xe8
	unsigned int m_MeshScatteringCellPoolCapacity; // 0xec
	unsigned int m_MeshScatteringTreeNodePoolCapacity; // 0xf0
	float m_MeshScatteringInvisibleCellFovFactor; // 0xf4
	unsigned int m_MeshScatteringCullRecordCount; // 0xf8
	unsigned int m_MeshScatteringBuildChannelCount; // 0xfc
	unsigned int m_MeshScatteringBuildChannelsLaunchedPerFrameCountMax; // 0x100
	unsigned int m_MeshScatteringClodFrameCount; // 0x104
	float m_MeshScatteringWindSpeed; // 0x108
	unsigned int m_MeshScatteringInstancesPerCellMax; // 0x10c
	float m_MeshScatteringDensityMarginFactor; // 0x110
	float m_MeshScatteringPregenerationDistanceRatio; // 0x114
	float m_MeshScatteringKeepDistanceRatio; // 0x118
	int m_MeshScatteringVirtualTextureBlurriness; // 0x11c
	float m_MeshScatteringShadowViewCullSize; // 0x120
	float m_MeshScatteringDistanceScaleFactor; // 0x124
	unsigned int m_MeshScatteringInstanceCullJobCount; // 0x128
	unsigned int m_MeshScatteringInstanceCullListCount; // 0x12c
	float m_MeshScatteringSnappingGridMultiplierVertical; // 0x130
	float m_MeshScatteringSnappingGridMultiplierHorizontal; // 0x134
	QualityLevel m_DetailDisplacementQualityLevel; // 0x138
	int m_DrawDetailDisplacementTreeLevel; // 0x13c
	float m_DetailDisplacementMaxTessFactor; // 0x140
	float m_DetailDisplacementScale; // 0x144
	float m_DetailDisplacementBias; // 0x148
	float m_DetailDisplacementDensity; // 0x14c
	float m_DetailDisplacementFadeRange; // 0x150
	bool m_WireframeEnable; // 0x154
	bool m_Enable; // 0x155
	bool m_EditServiceEnable; // 0x156
	bool m_TessellationEnable; // 0x157
	bool m_TessellationForReflectionsEnable; // 0x158
	bool m_TessellationForShadowsEnable; // 0x159
	bool m_DetailDisplacementForReflectionsEnable; // 0x15a
	bool m_DetailDisplacementForShadowsEnable; // 0x15b
	bool m_DensityMapEnable; // 0x15c
	bool m_VertexBufferHeightsEnable; // 0x15d
	bool m_DrawVertexYTextureEnable; // 0x15e
	bool m_TextureVtIndirectionJobEnable; // 0x15f
	bool m_TextureStreamingPrioritizationJobEnable; // 0x160
	bool m_TextureClodEnable; // 0x161
	bool m_TextureForceUpdateEnable; // 0x162
	bool m_TextureCompressFastAlgorithmEnable; // 0x163
	bool m_DrawTextureDebugColors; // 0x164
	bool m_TextureDrawTerrainLayersEnable; // 0x165
	bool m_TextureKeepPoolFullEnable; // 0x166
	bool m_TextureLayerCullingEnable; // 0x167
	bool m_GpuTextureCompressionEnable; // 0x168
	bool m_TextureStreamingPrioritizationEnable; // 0x169
	bool m_DetailTextureStreamingPrioritizationEnable; // 0x16a
	bool m_MeshScatteringMeshStreamingPrioritizationEnable; // 0x16b
	bool m_PrioritizationOcclusionEnable; // 0x16c
	bool m_DrawEnable; // 0x16d
	bool m_DrawPatchesEnable; // 0x16e
	bool m_DetailOverlayEnable; // 0x16f
	bool m_PatchInstancingEnable; // 0x170
	bool m_DrawInstancingStats; // 0x171
	bool m_DecalEnable; // 0x172
	bool m_ForceDecalReducedQuality; // 0x173
	bool m_DrawDecal2dEnable; // 0x174
	bool m_DrawDecal3dEnable; // 0x175
	bool m_DrawDecalZPassEnable; // 0x176
	bool m_DrawOnlyDecalZPassEnable; // 0x177
	bool m_DrawPatchBoxesEnable; // 0x178
	bool m_DrawBadPatchesEnable; // 0x179
	bool m_DrawTextureTileBoxesEnable; // 0x17a
	bool m_DrawDebugTextEnable; // 0x17b
	bool m_DrawDebugTexturesEnable; // 0x17c
	bool m_DrawQuadtreesEnable; // 0x17d
	bool m_DrawDebugPhysicsMaterialMapEnable; // 0x17e
	bool m_DrawQuadtreeStatsEnable; // 0x17f
	bool m_DrawQuadtreeAtlasTexturesEnable; // 0x180
	bool m_DrawDynamicMask; // 0x181
	bool m_DrawWaterEnable; // 0x182
	bool m_PatchErrorFovEnable; // 0x183
	bool m_DebugOverlayGridEnable; // 0x184
	bool m_DebugOverlayIsolinesEnable; // 0x185
	bool m_DebugOverlayWireframeEnable; // 0x186
	bool m_DebugOverlaySketchTextureEnable; // 0x187
	bool m_DebugOverlayBrushEnable; // 0x188
	bool m_ForceGraphicsDriverCrash; // 0x189
	bool m_ForcePatchRebuildEnable; // 0x18a
	bool m_DestroyAll; // 0x18b
	bool m_SlotDebugOutputEnable; // 0x18c
	bool m_UpdateJobsEnable; // 0x18d
	bool m_RegenerateTexturesEnable; // 0x18e
	bool m_DynamicMaskEnable; // 0x18f
	bool m_PatchLodTransitionsEnable; // 0x190
	bool m_PatchMaterialSortingEnable; // 0x191
	bool m_CullSampleBoundingBoxHeightEnable; // 0x192
	bool m_CastShadowsEnable; // 0x193
	bool m_CastPlanarReflectionEnable; // 0x194
	bool m_CastEnvmapReflectionEnable; // 0x195
	bool m_CastDecal3dPlanarReflectionEnable; // 0x196
	bool m_CastDecal3dEnvmapReflectionEnable; // 0x197
	bool m_DetailDisplacementInShadowViewEnable; // 0x198
	bool m_GlobalColormapEnable; // 0x199
	bool m_OccluderEnable; // 0x19a
	bool m_OccluderJobEnable; // 0x19b
	bool m_OccluderBackFaceCullingEnable; // 0x19c
	bool m_OccludedEnable; // 0x19d
	bool m_MeshScatteringEnable; // 0x19e
	bool m_MeshScatteringJobsEnable; // 0x19f
	bool m_MeshScatteringCastShadowsEnable; // 0x1a0
	bool m_DrawMeshScatteringEnable; // 0x1a1
	bool m_DrawMeshScatteringCellBoxesEnable; // 0x1a2
	bool m_DrawMeshScatteringBatchBoxesEnable; // 0x1a3
	bool m_DrawMeshScatteringNodeBoxesEnable; // 0x1a4
	bool m_DrawMeshScatteringCulledCellBoxesEnable; // 0x1a5
	bool m_DrawMeshScatteringDebugMaskScaleTexturesEnable; // 0x1a6
	bool m_DrawMeshScatteringStatsEnable; // 0x1a7
	bool m_DrawMeshScatteringQuadtreeEnable; // 0x1a8
	bool m_MeshScatteringForceUpdateEnable; // 0x1a9
	bool m_MeshScatteringBuildVisibleFirst; // 0x1aa
	bool m_MeshScatteringMergeInstanceLists; // 0x1ab
	bool m_MeshScatteringInstanceCullBoxTestEnable; // 0x1ac
	bool m_MeshScatteringInstanceNewCodeEnable; // 0x1ad
	bool m_MeshScatteringInstanceFrustumCullEnable; // 0x1ae
	bool m_MeshScatteringInstanceOcclusionCullEnable; // 0x1af
	bool m_MeshScatteringInstanceAdditionalCullEnable; // 0x1b0
	bool m_DrawMeshScatteringInstanceBoxesEnable; // 0x1b1
	bool m_MeshScatteringInstanceCullDynamicAllocEnable; // 0x1b2
	bool m_MeshScatteringWindEnable; // 0x1b3
	bool m_MeshScatteringVelocityVectorEnable; // 0x1b4
	bool m_DetailDisplacementEnable; // 0x1b5
	bool m_DrawDetailDisplacementEnable; // 0x1b6
	bool m_DrawDebugDetailDisplacementEnable; // 0x1b7
}; // size = 0x1b8

#endif // FBGEN_VisualTerrainSettings_H
