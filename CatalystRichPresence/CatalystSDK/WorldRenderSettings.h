//
// Generated with FrostbiteGen by Chod
// File: SDK\WorldRenderSettings.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WorldRenderSettings_H
#define FBGEN_WorldRenderSettings_H

#include "Vec4.h"
#include "LightTileDebugLightCountMode.h"
#include "PostProcessAAMode.h"
#include "ScaleResampleMode.h"
#include "QualityScalableInt.h"
#include "SkyRenderMode.h"
#include "LensReflectionAsyncComputeMethod.h"
#include "MorphAsyncComputeMethod.h"
#include "SpotLightShadowmapTextureMode.h"
#include "QualityLevel.h"
#include "WorldRenderSettingsBase.h"

class WorldRenderSettings :
	public WorldRenderSettingsBase // size = 0x1b0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428461C0;
	}
	Vec4 m_OverlayColor; // 0x1b0
	unsigned int m_GenericEntityMaxVisibleEntityCount; // 0x1c0
	unsigned int m_DrawDebugGroundHeight; // 0x1c4
	float m_DecalVolumeScale; // 0x1c8
	unsigned int m_MaxLensFlaresPerFrame; // 0x1cc
	QualityLevel m_LensFlaresQualityLevel; // 0x1d0
	unsigned int m_GBufferLayout; // 0x1d4
	unsigned int m_GBufferTestCount; // 0x1d8
	float m_GBufferAlphaTestSimpleSmoothness; // 0x1dc
	float m_GBufferForceSmoothness; // 0x1e0
	float m_GBufferForceSpecularAlbedo; // 0x1e4
	int m_HierarchicalZJitterForceIndex; // 0x1e8
	unsigned int m_OutdoorLightTileBatchCount; // 0x1ec
	int m_OnlyLightTileIndex; // 0x1f0
	unsigned int m_EmitterSunTransmittanceMapResolution; // 0x1f4
	unsigned int m_MaxDestructionVolumeCount; // 0x1f8
	unsigned int m_MaxDecalVolumeCount; // 0x1fc
	unsigned int m_MaxSpotAndPointLightShadowmapCount; // 0x200
	unsigned int m_LightTileCsAvgLightCountPerTile; // 0x204
	float m_LightCullFrustumExpandDistance; // 0x208
	LightTileDebugLightCountMode m_LightTileDebugLightMode; // 0x20c
	int m_LightTileDebugColorMode; // 0x210
	unsigned int m_DebugLightStatsLightCountHighwatermark; // 0x214
	float m_LightLodFadeArea; // 0x218
	float m_LightLodMinArea; // 0x21c
	float m_LightLodRadiusFactor; // 0x220
	unsigned int m_OcclusionCullingWidth; // 0x224
	unsigned int m_OcclusionCullingHeight; // 0x228
	unsigned int m_OcclusionTriangleCount; // 0x22c
	unsigned int m_ShadowOcclusionCullingWidth; // 0x230
	unsigned int m_ShadowOcclusionCullingHeight; // 0x234
	unsigned int m_ShadowOcclusionTriangleCount; // 0x238
	float m_FrustumSilhouetteCullingPadding; // 0x23c
	int m_SubSurfaceScatteringSampleCount; // 0x240
	float m_SubsurfaceBlurPixelRadiusCullThreshold; // 0x244
	int m_OnlyTileIndex; // 0x248
	float m_PlanarReflectionViewScale; // 0x24c
	float m_PlanarReflectionConvolutionSampleClampThreshold; // 0x250
	unsigned int m_PlanarReflectionConvolutionSampleCount; // 0x254
	float m_PlanarReflectionCullFOV; // 0x258
	float m_PlanarReflectionFarPlane; // 0x25c
	unsigned int m_DrawDebugPlanarReflectionMipLevel; // 0x260
	unsigned int m_DrawDebugPlanarReflectionMode; // 0x264
	float m_ReflectionLodScale; // 0x268
	PostProcessAAMode m_PostProcessAntialiasingMode; // 0x26c
	unsigned int m_TemporalAAJitterCount; // 0x270
	float m_TemporalAASharpness; // 0x274
	float m_TemporalAAMinHistoryBlendFactor; // 0x278
	float m_TemporalAAMaxHistoryBlendFactor; // 0x27c
	float m_TemporalAADisocclusionRejectionFactor; // 0x280
	float m_TemporalAALumaContrastFactor; // 0x284
	float m_TemporalAAMotionSharpeningFactor; // 0x288
	float m_TemporalAAAntiflickerMultiplier; // 0x28c
	float m_TemporalAAAntiflickerInDistance; // 0x290
	float m_TemporalAAAntiflickerOutDistance; // 0x294
	unsigned int m_DrawDebugTemporalAAAccumulationCount; // 0x298
	unsigned int m_DrawDebugTemporalAADebugMode; // 0x29c
	float m_DrawDebugTemporalAAMaxDistance; // 0x2a0
	ScaleResampleMode m_RenderScaleResampleMode; // 0x2a4
	QualityLevel m_SkyCelestialQuality; // 0x2a8
	QualityScalableInt m_SkyCelestialMaxQuadCount; // 0x2ac
	SkyRenderMode m_SkyRenderMode; // 0x2bc
	LensReflectionAsyncComputeMethod m_LensReflectionAsyncComputeMethod; // 0x2c0
	MorphAsyncComputeMethod m_MorphAsyncComputeMethod; // 0x2c4
	float m_InterpupillaryDistance; // 0x2c8
	unsigned int m_SpotLightShadowmapResolution; // 0x2cc
	unsigned int m_SpotLightShadowmapQuality; // 0x2d0
	float m_SpotLightShadowmapPoissonFilterScale; // 0x2d4
	SpotLightShadowmapTextureMode m_SpotLightShadowmapTextureMode; // 0x2d8
	float m_SpotLightShadowMaxAngle; // 0x2dc
	float m_SpotLightShadowFadeOutRange; // 0x2e0
	unsigned int m_MaxShadowCount; // 0x2e4
	unsigned int m_LocalLightShadowmapCachingAllowedPerFrame; // 0x2e8
	unsigned int m_LocalLightShadowmapCachingRefreshedPerFrame; // 0x2ec
	unsigned int m_LocalLightShadowmapCachingRefreshedDuringLRV; // 0x2f0
	unsigned int m_MaxPunctualLightCount; // 0x2f4
	unsigned int m_MaxPunctualShadowLightCount; // 0x2f8
	unsigned int m_MaxAreaLightCount; // 0x2fc
	unsigned int m_MaxAreaShadowLightCount; // 0x300
	unsigned int m_MaxLocalReflectionVolumeCount; // 0x304
	unsigned int m_MaxLocalPlanarReflectionCount; // 0x308
	unsigned int m_MaxPunctualRectangularLightCount; // 0x30c
	QualityLevel m_PunctualLightShadowLevel; // 0x310
	QualityLevel m_AreaLightShadowLevel; // 0x314
	unsigned int m_LocalIBLMaxFaceCapture; // 0x318
	unsigned int m_LocalIBLLightingUpdateCount; // 0x31c
	unsigned int m_LocalIBLRefreshDelayCount; // 0x320
	float m_LocalIBLSunUpdateThreshold; // 0x324
	unsigned int m_LocalIBLShadowmapSliceCount; // 0x328
	unsigned int m_LocalIBLShadowmapResolution; // 0x32c
	unsigned int m_OpaqueDispatchListSortMethod; // 0x330
	unsigned int m_OpaqueDispatchListMixKey; // 0x334
	unsigned int m_OpaqueDispatchListBatchMethod; // 0x338
	unsigned int m_OpaqueDispatchListBatchArgLow; // 0x33c
	unsigned int m_OpaqueDispatchListBatchArgHigh; // 0x340
	unsigned int m_ShadowDispatchListSortMethod; // 0x344
	unsigned int m_ShadowDispatchListMixKey; // 0x348
	unsigned int m_ShadowDispatchListBatchMethod; // 0x34c
	unsigned int m_ShadowDispatchListBatchArgLow; // 0x350
	unsigned int m_ShadowDispatchListBatchArgHigh; // 0x354
	unsigned int m_TransparentDispatchListSortMethod; // 0x358
	unsigned int m_TransparentDispatchListMixKey; // 0x35c
	unsigned int m_TransparentDispatchListBatchMethod; // 0x360
	unsigned int m_TransparentDispatchListBatchArgLow; // 0x364
	unsigned int m_TransparentDispatchListBatchArgHigh; // 0x368
	unsigned int m_PBRLocalIBLAcquisitionFrequency; // 0x36c
	unsigned int m_PBRLocalIBLAcquisitionWaitFrameCount; // 0x370
	unsigned int m_PBRDiffuseConvolutionMipLevelOffset; // 0x374
	unsigned int m_PBRSpecularConvolutionSampleCount; // 0x378
	unsigned int m_PBRDebugSpecularConvolutionSampleCount; // 0x37c
	unsigned int m_LocalIBLResolution; // 0x380
	float m_DrawDebugLocalIBLPreviewScale; // 0x384
	unsigned int m_DrawDebugLocalIBLIndex; // 0x388
	unsigned int m_DrawDebugLocalIBLMipLevel; // 0x38c
	unsigned int m_ContinuousLocalIBLIndex; // 0x390
	float m_PBRMaxIlluminanceValue; // 0x394
	float m_DiffuseRangeSRGBMinLimitValue; // 0x398
	float m_DiffuseRangeSRGBMinValue; // 0x39c
	float m_DiffuseRangeSRGBMaxValue; // 0x3a0
	float m_DiffuseRangeSRGBMaxLimitValue; // 0x3a4
	float m_VolumetricLightCascadeBaseVoxelSize; // 0x3a8
	float m_VolumetricLightCascadeVoxelSizeCascadeFactor; // 0x3ac
	unsigned int m_VolumetricLightCascadeResolution; // 0x3b0
	float m_VolumetricDensityCascadeBaseVoxelSize; // 0x3b4
	float m_VolumetricDensityCascadeVoxelSizeCascadeFactor; // 0x3b8
	unsigned int m_VolumetricDensityCascadeResolution; // 0x3bc
	float m_VolumetricLightingIncreaseTemporalSmoothingFactor; // 0x3c0
	float m_VolumetricLightingDecreaseTemporalSmoothingFactor; // 0x3c4
	unsigned int m_VolumetricShadowQuality; // 0x3c8
	unsigned int m_VolumetricShadowmapResolution; // 0x3cc
	unsigned int m_VolumetricShadowmapMaxCount; // 0x3d0
	QualityLevel m_PunctualLightCastVolumetricShadowmapEnableLevel; // 0x3d4
	QualityLevel m_AreaLightCastVolumetricShadowmapEnableLevel; // 0x3d8
	unsigned int m_VolumetricParticlesInjectionMode; // 0x3dc
	unsigned int m_DrawDebugVolumetricDensity; // 0x3e0
	unsigned int m_DrawDebugVolumetricLight; // 0x3e4
	float m_DrawGpuHistogramHDRMinEV; // 0x3e8
	float m_DrawGpuHistogramHDRMaxEV; // 0x3ec
	unsigned int m_DrawGpuHistogramBinCount; // 0x3f0
	unsigned int m_NumberOfEntitiesPerPartition; // 0x3f4
	bool m_RenderModulesAsyncComputeEnabled; // 0x3f8
	bool m_TestRenderingEnable; // 0x3f9
	bool m_GenericEntityRendererEnable; // 0x3fa
	bool m_ZBufferShadowTestEnable; // 0x3fb
	bool m_DecalVolumeEnable; // 0x3fc
	bool m_DrawDebugDecalVolumes; // 0x3fd
	bool m_DrawDebugDestructionVolumes; // 0x3fe
	bool m_LensFlaresEnable; // 0x3ff
	bool m_DrawDebugLensFlareOccluders; // 0x400
	bool m_DrawDebugLensFlares; // 0x401
	bool m_LensFlareOcclusionEnable; // 0x402
	bool m_CloudShadowEnable; // 0x403
	bool m_OverrideDynamicAO; // 0x404
	bool m_DrawDebugDynamicAO; // 0x405
	bool m_FilmicEffectsEnable; // 0x406
	bool m_EmissiveEnable; // 0x407
	bool m_GBufferClearEnable; // 0x408
	bool m_DxGBufferLight16BitEnable; // 0x409
	bool m_DxGBufferNormal16BitEnable; // 0x40a
	bool m_DxGBufferRoughness16BitEnable; // 0x40b
	bool m_GBufferAlphaTestSimpleEnable; // 0x40c
	bool m_GBufferSrgbEnable; // 0x40d
	bool m_Gen4aEsramEnable; // 0x40e
	bool m_Gen4aRenderScaleEsramEnable; // 0x40f
	bool m_Gen4aLdrTargetsEsramEnable; // 0x410
	bool m_Gen4aHierarchicalZEsramEnable; // 0x411
	bool m_Gen4aScreenSpaceRaytraceEsramEnable; // 0x412
	bool m_HierarchicalZJitterEnable; // 0x413
	bool m_SpecularLightingEnable; // 0x414
	bool m_SkinLightingEnable; // 0x415
	bool m_TranslucencyLightingEnable; // 0x416
	bool m_TranslucencyAutoThicknessEnable; // 0x417
	bool m_DynamicEnvmapLightingEnable; // 0x418
	bool m_OutdoorLightEnable; // 0x419
	bool m_LightStencilMethodEnable; // 0x41a
	bool m_LightVolumeMethodEnable; // 0x41b
	bool m_LightVolumeDepthTestEnable; // 0x41c
	bool m_OutdoorKeyLightEnable; // 0x41d
	bool m_OutdoorSkyLightEnable; // 0x41e
	bool m_OutdoorLightTilingEnable; // 0x41f
	bool m_OutdoorLightTileRenderEnable; // 0x420
	bool m_OutdoorLightTileBlendEnable; // 0x421
	bool m_OutdoorLightTileSimpleShaderEnable; // 0x422
	bool m_EmitterSunTransmittanceMapEnable; // 0x423
	bool m_RadiositySpotLightShadowCullingEnable; // 0x424
	bool m_LightTileCombineOutdoorLightEnable; // 0x425
	bool m_LightTileCsPathEnable; // 0x426
	bool m_LightTileAsyncComputeCulling; // 0x427
	bool m_LightTileMinMaxUseHTile; // 0x428
	bool m_LightTileUseCullingHierarchy; // 0x429
	bool m_LightTileUseDetailedGpuTimers; // 0x42a
	bool m_LightTileUseCsIndirectClears; // 0x42b
	bool m_LightCullUseVendorSpecificWarpSize; // 0x42c
	bool m_DrawDebugLightStats; // 0x42d
	bool m_DrawDebugLightStatsForward; // 0x42e
	bool m_DrawDebugLightSources; // 0x42f
	bool m_DrawDebugLightShadowSources; // 0x430
	bool m_DrawDebugLightShadowStats; // 0x431
	bool m_DrawDebugGBuffer; // 0x432
	bool m_DrawDebugMaterialInput; // 0x433
	bool m_DrawDebugMaterialOutput; // 0x434
	bool m_DrawDebugLightEmissiveSurface; // 0x435
	bool m_UseNewLightCullEnable; // 0x436
	bool m_LightCullEnable; // 0x437
	bool m_LightOcclusionCullEnable; // 0x438
	bool m_LightConeCullEnable; // 0x439
	bool m_LocalIBLOcclusionCullingEnable; // 0x43a
	bool m_ShadowOcclusionCullingEnable; // 0x43b
	bool m_FrustumSilhouetteCullingEnable; // 0x43c
	bool m_SubSurfaceScatteringEnable; // 0x43d
	bool m_TranslucencyEnable; // 0x43e
	bool m_SplitLightingEnable; // 0x43f
	bool m_SubsurfaceBlurComputeEnable; // 0x440
	bool m_SubsurfaceBlurQuadtreeTileGenEnable; // 0x441
	bool m_OpaqueSortBySolutionEnable; // 0x442
	bool m_MainOpaqueZPassEnable; // 0x443
	bool m_PlanarReflectionEnable; // 0x444
	bool m_PlanarReflectionFastHdrEnable; // 0x445
	bool m_PlanarReflectionBlurEnable; // 0x446
	bool m_PlanarReflectionConvolutionEnable; // 0x447
	bool m_PlanarReflectionConvolutionRandomSamplesEnable; // 0x448
	bool m_PlanarReflectionConvolutionPostFilterEnable; // 0x449
	bool m_PlanarReflectionClippingEnable; // 0x44a
	bool m_DrawDebugPlanarReflection; // 0x44b
	bool m_DrawDebugPlanarReflectionCullFrustum; // 0x44c
	bool m_LocalPlanarReflectionConvolutionEnable; // 0x44d
	bool m_OverlayEnable; // 0x44e
	bool m_OverlayZTestEnable; // 0x44f
	bool m_RunnersVisionEnable; // 0x450
	bool m_DrawRunnersVisionDebug; // 0x451
	bool m_RunnersVisionAsyncClearEnable; // 0x452
	bool m_ScannerEnable; // 0x453
	bool m_SimpleVolumetricsEnable; // 0x454
	bool m_SimpleVolumetricsInHalfRes; // 0x455
	bool m_SmaaVelocityReprojectionEnable; // 0x456
	bool m_SmaaUseStencil; // 0x457
	bool m_SmaaPredicatedThresholdingEnable; // 0x458
	bool m_TemporalAAJitterUseCmj; // 0x459
	bool m_TemporalAASmoothHistoryFiltering; // 0x45a
	bool m_DrawDebugTemporalAAEnable; // 0x45b
	bool m_TemporalAADofCocFilterEnable; // 0x45c
	bool m_RenderScaleResampleEnable; // 0x45d
	bool m_SkyCelestialEnable; // 0x45e
	bool m_LensReflectionEnable; // 0x45f
	bool m_LensDirtEnable; // 0x460
	bool m_SpriteDOFBeforeMotionBlur; // 0x461
	bool m_VrHmdLensDistortionEnable; // 0x462
	bool m_VrHmdLateReprojectionEnable; // 0x463
	bool m_SpotLightShadowmapEnable; // 0x464
	bool m_LocalLightShadowmapCachingStats; // 0x465
	bool m_LocalLightShadowmapCachingEnable; // 0x466
	bool m_PBRSupportOriginalLight; // 0x467
	bool m_RadiosityShadowCullingEnable; // 0x468
	bool m_PunctualLightsEnable; // 0x469
	bool m_AreaLightsEnable; // 0x46a
	bool m_LocalReflectionEnable; // 0x46b
	bool m_TilePassPunctualLightsEnable; // 0x46c
	bool m_TilePassPunctualLightShadowEnable; // 0x46d
	bool m_TilePassAreaLightsEnable; // 0x46e
	bool m_TilePassAreaLightShadowEnable; // 0x46f
	bool m_TilePassLocalReflectionVolumeEnable; // 0x470
	bool m_TilePassLocalPlanarReflectionEnable; // 0x471
	bool m_SphereLightsEnable; // 0x472
	bool m_PunctualSphereLightsEnable; // 0x473
	bool m_SpotLightsEnable; // 0x474
	bool m_PunctualSpotLightsEnable; // 0x475
	bool m_TubeLightsEnable; // 0x476
	bool m_PunctualTubeLightsEnable; // 0x477
	bool m_RectangularLightsEnable; // 0x478
	bool m_PunctualRectangularLightsEnable; // 0x479
	bool m_LocalReflectionVolumeSphereEnable; // 0x47a
	bool m_LocalReflectionVolumeBoxEnable; // 0x47b
	bool m_LocalPlanarReflectionEnable; // 0x47c
	bool m_LocalIBLPauseRefreshes; // 0x47d
	bool m_LocalIBLDisableUpdates; // 0x47e
	bool m_LocalIBLPositionalPriorityEnable; // 0x47f
	bool m_LocalIBLDirectionalPriorityEnable; // 0x480
	bool m_LocalIBLUpdateWithEnlightenSkyBoxChange; // 0x481
	bool m_LocalIBLSunSpecularOcclusionEnable; // 0x482
	bool m_LocalIBLBoxCullingEnable; // 0x483
	bool m_LocalIBLShadowmapFaceMerging; // 0x484
	bool m_LocalIBLShadowmapSeparateFrame; // 0x485
	bool m_LocalIBLSunDiskEnable; // 0x486
	bool m_ShadowOptimisationEstimateEnable; // 0x487
	bool m_LocalIBLWaitForStreamingEnable; // 0x488
	bool m_PBRLocalIBLFogEnable; // 0x489
	bool m_PBRDrawDiffuseReference; // 0x48a
	bool m_PBRDrawSpecularReference; // 0x48b
	bool m_PBRDrawLocalIBLReference; // 0x48c
	bool m_PBRDrawDistantIBLReference; // 0x48d
	bool m_PBRDrawAreaLightReference; // 0x48e
	bool m_PBRConvolutionMISEnable; // 0x48f
	bool m_PBRConvolutionHighestMIPEnable; // 0x490
	bool m_PBRConvolutionCubeArrayEnable; // 0x491
	bool m_PBRConvolutionChainEnable; // 0x492
	bool m_DrawDebugLocalIBLEnable; // 0x493
	bool m_DrawDebugLocalIBLStatsEnable; // 0x494
	bool m_DrawDebugLocalIBLVolumesEnable; // 0x495
	bool m_DrawDebugLocalIBLShadowmaps; // 0x496
	bool m_DrawDebugPreIntegratedFGTexture; // 0x497
	bool m_DrawDebugReflectionState; // 0x498
	bool m_DrawDebugProbeMirrorEnable; // 0x499
	bool m_DrawDebugProbeDiffuseEnable; // 0x49a
	bool m_DrawDebugProbeScreenEnable; // 0x49b
	bool m_DrawDebugProbeScreenOnRight; // 0x49c
	bool m_ContinuousLocalIBLEnable; // 0x49d
	bool m_PBRConvolutionPrecomputedSampleEnable; // 0x49e
	bool m_PBRConvolutionComputeEnable; // 0x49f
	bool m_PBRConvolutionRandomRotationEnable; // 0x4a0
	bool m_DrawDebugLocalPlanarReflections; // 0x4a1
	bool m_LocalPlanarReflectionsBoxCullingEnable; // 0x4a2
	bool m_DrawDebugViewList; // 0x4a3
	bool m_EmitterQuadRenderingEnable; // 0x4a4
	bool m_EmitterMeshRenderingEnable; // 0x4a5
	bool m_EmitterPointLightsEnable; // 0x4a6
	bool m_EmitterSpotLightsEnable; // 0x4a7
	bool m_UseSSSProfileforOATS; // 0x4a8
	bool m_DeterministicRenderingEnable; // 0x4a9
	bool m_HdrNanInfRemovalEnable; // 0x4aa
	bool m_HdrNanInfRemovalForceEnable; // 0x4ab
	bool m_VolumetricRenderingEnable; // 0x4ac
	bool m_VolumetricCascadePositionUpdateEnable; // 0x4ad
	bool m_VolumetricLightingTemporalAAEnable; // 0x4ae
	bool m_VolumetricLightingUpsamplePreviousCascade; // 0x4af
	bool m_VolumetricShadowSkipLowerMipSamples; // 0x4b0
	bool m_VolumetricShadowCascadeBasedQuality; // 0x4b1
	bool m_VolumetricShadowmapEnable; // 0x4b2
	bool m_VolumetricParticlesDensityInjectionEnable; // 0x4b3
	bool m_EmitterVolumetricLightingEnable; // 0x4b4
	bool m_DrawDebugVolumetricCascadedVolumesEnable; // 0x4b5
	bool m_DrawDebugVolumetricShadowMaps; // 0x4b6
	bool m_DrawDebugVolumetricEmitterInjectingDensityEnable; // 0x4b7
	bool m_LightShaftFastHdrEnable; // 0x4b8
	bool m_DrawGpuHistogramEnable; // 0x4b9
	bool m_DrawGpuHistogramRed; // 0x4ba
	bool m_DrawGpuHistogramBlue; // 0x4bb
	bool m_DrawGpuHistogramGreen; // 0x4bc
	bool m_DrawGpuHistogramLuminance; // 0x4bd
	bool m_DrawGpuHistogramHDRMode; // 0x4be
	bool m_EntityRendererPartitioningEnable; // 0x4bf
	bool m_DrawDebugEntityRendererPartitions; // 0x4c0
	bool m_DisableNonCubemapRootViews; // 0x4c1
	unsigned char _0x4c2[0xe];
}; // size = 0x4d0

#endif // FBGEN_WorldRenderSettings_H
