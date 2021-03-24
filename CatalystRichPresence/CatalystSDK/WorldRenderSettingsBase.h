//
// Generated with FrostbiteGen by Chod
// File: SDK\WorldRenderSettingsBase.h
// Created: Wed Mar 10 18:58:43 2021
//

#ifndef FBGEN_WorldRenderSettingsBase_H
#define FBGEN_WorldRenderSettingsBase_H

#include "Vec3.h"
#include "WorldViewMode.h"
#include "MipmapFilterMode.h"
#include "DataContainer.h"

class WorldRenderSettingsBase :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846220;
	}
	float m_CullScreenAreaScale; // 0x10
	float m_MinShadowViewCoverage; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_MotionBlurClearColor; // 0x20
	Vec3 m_DynamicEnvmapDefaultPosition; // 0x30
	float m_ShadowmapMinFov; // 0x40
	float m_ShadowmapSizeZScale; // 0x44
	unsigned int m_ShadowmapResolution; // 0x48
	unsigned int m_ShadowmapQuality; // 0x4c
	float m_ShadowmapPoissonFilterScale; // 0x50
	unsigned int m_ShadowmapSliceCount; // 0x54
	unsigned int m_Shadowmap32SliceCount; // 0x58
	float m_ShadowmapSliceSchemeWeight; // 0x5c
	float m_ShadowmapFirstSliceScale; // 0x60
	float m_ShadowmapViewDistance; // 0x64
	float m_ShadowmapExtrusionLength; // 0x68
	float m_ShadowmapTransitionBlendAmount; // 0x6c
	int m_SunPcssMaxSampleCount; // 0x70
	int m_SunPcssAdaptiveSampleIncrement; // 0x74
	float m_MotionBlurScale; // 0x78
	float m_MotionBlurFixedShutterTime; // 0x7c
	float m_MotionBlurMax; // 0x80
	float m_MotionBlurRadialBlurMax; // 0x84
	float m_MotionBlurNoiseScale; // 0x88
	unsigned int m_MotionBlurQuality; // 0x8c
	unsigned int m_MotionBlurDebugMode; // 0x90
	unsigned int m_MotionBlurMaxSampleCount; // 0x94
	float m_ForceMotionBlurDepthCutoff; // 0x98
	float m_ForceMotionBlurCutoffGradientScale; // 0x9c
	float m_MotionBlurDepthCheckThreshold; // 0xa0
	float m_MotionBlurDepthCheckMaxDistance; // 0xa4
	unsigned int m_MultisampleCount; // 0xa8
	unsigned int m_MultisampleQuality; // 0xac
	int m_OnlyShadowmapSlice; // 0xb0
	WorldViewMode m_ViewMode; // 0xb4
	unsigned int m_AdditionalHdrTargetInESRAM; // 0xb8
	int m_DrawDebugBlurPyramidMipLevel; // 0xbc
	unsigned int m_DrawDebugBuffers; // 0xc0
	float m_HalfResDepthMinMaxDitherThreshold; // 0xc4
	unsigned int m_PhysicalSkyPrecisionHeight; // 0xc8
	unsigned int m_PhysicalSkyPrecisionView; // 0xcc
	unsigned int m_PhysicalSkyPrecisionSun; // 0xd0
	unsigned int m_PhysicalSkyScatteringOrders; // 0xd4
	unsigned int m_PhysicalSkyAerialPerspectiveTextureWidth; // 0xd8
	unsigned int m_PhysicalSkyAerialPerspectiveTextureHeight; // 0xdc
	unsigned int m_PhysicalSkyAerialPerspectiveTextureDepth; // 0xe0
	unsigned int m_PhysicalSkyScatteringEvalFrameCount; // 0xe4
	float m_PhysicalSkyAerialPerspectiveMaxDistance; // 0xe8
	float m_SkyEnvmapFilterWidth; // 0xec
	unsigned int m_SkyEnvmapResolution; // 0xf0
	int m_DrawDebugSkyEnvmapMipLevel; // 0xf4
	MipmapFilterMode m_SkyEnvmapFilterMode; // 0xf8
	unsigned int m_SkyEnvmapSidesPerFrameCount; // 0xfc
	float m_SkyEnvmapUpdateCountThreshold; // 0x100
	float m_SkyEnvmapUpdateValueThreshold; // 0x104
	unsigned int m_SkyEnvmapUpdateDelayCount; // 0x108
	float m_DynamicEnvmapFilterWidth; // 0x10c
	int m_DrawDebugDynamicEnvmapMipLevel; // 0x110
	MipmapFilterMode m_DynamicEnvmapFilterMode; // 0x114
	unsigned int m_DynamicEnvmapSpecularConvolutionSampleCount; // 0x118
	unsigned int m_DynamicEnvmapShadowmapResolution; // 0x11c
	int m_DynamicEnvmapShadowmapFarPlane; // 0x120
	int m_DynamicEnvmapShadowmapShadowExtrusion; // 0x124
	bool m_DeferredShadingEnable; // 0x128
	bool m_ForwardOpaqueEnable; // 0x129
	bool m_FullZPassEnable; // 0x12a
	bool m_TileMaterialClassificationEnable; // 0x12b
	bool m_ShadowmapsEnable; // 0x12c
	bool m_ShadowmapArrayEnable; // 0x12d
	bool m_TransparencyShadowmapsEnable; // 0x12e
	bool m_TransparencyShadowmapsHalfRes; // 0x12f
	bool m_ShadowmapBatchClearSlices; // 0x130
	bool m_ShadowmapFixedMovementEnable; // 0x131
	bool m_ShadowmapFixedDepthEnable; // 0x132
	bool m_ShadowmapViewDistanceScaleEnable; // 0x133
	bool m_ShadowmapCullVolumeEnable; // 0x134
	bool m_ShadowmapAdjustFarPlane; // 0x135
	bool m_ShadowmapAccumEnable; // 0x136
	bool m_ShadowmapAccumReuseEnable; // 0x137
	bool m_ShadowmapAccumBilinearEnable; // 0x138
	bool m_ShadowmapAccumStencilEnable; // 0x139
	bool m_ShadowmapAccumStencil2Enable; // 0x13a
	bool m_ShadowmapTransitionBlendEnable; // 0x13b
	bool m_DxShadowmap16BitEnable; // 0x13c
	bool m_DxSpotLightShadowmap16BitEnable; // 0x13d
	bool m_DxDynamicEnvmapShadowmap16BitEnable; // 0x13e
	bool m_ApplyShadowmapsEnable; // 0x13f
	bool m_GenerateShadowmapsEnable; // 0x140
	bool m_SimpleShadowmapsEnable; // 0x141
	bool m_EmitterShadowingBlendToggle; // 0x142
	bool m_EmitterShadowingManySamplesToggle; // 0x143
	bool m_DxLinearDepth32BitFormatEnable; // 0x144
	bool m_MotionBlurEnable; // 0x145
	bool m_MotionBlurOptimalStableVelocityFormula; // 0x146
	bool m_MotionBlurPreciseStableVelocityFormula; // 0x147
	bool m_MotionBlurStencilPassEnable; // 0x148
	bool m_MotionBlurGeometryPassEnable; // 0x149
	bool m_MotionBlurBackgroundPassEnable; // 0x14a
	bool m_MotionBlurCenteredEnable; // 0x14b
	bool m_MotionBlurHairPassEnable; // 0x14c
	bool m_DrawTransparent; // 0x14d
	bool m_DrawTransparentDecal; // 0x14e
	bool m_TransparentAfterMotionBlur; // 0x14f
	bool m_TransparentDofEnable; // 0x150
	bool m_TransparentDofHalfResEnable; // 0x151
	bool m_Enable; // 0x152
	bool m_HdrEnable; // 0x153
	bool m_LdrEnable; // 0x154
	bool m_ReadOnlyDepthEnable; // 0x155
	bool m_ConsoleRenderTargetPoolSharingEnable; // 0x156
	bool m_FastHdrEnable; // 0x157
	bool m_LinearDepthInESRAM; // 0x158
	bool m_HalfResDepthResolveEnable; // 0x159
	bool m_FinalPostEnable; // 0x15a
	bool m_OutputGammaCorrectionEnable; // 0x15b
	bool m_ScreenEffectEnable; // 0x15c
	bool m_DrawSolidBoundingBoxes; // 0x15d
	bool m_DrawLineBoundingBoxes; // 0x15e
	bool m_DrawBoundingSpheres; // 0x15f
	bool m_DrawFrustums; // 0x160
	bool m_DrawLocalIBLFrustums; // 0x161
	bool m_DrawDebugShadowmaps; // 0x162
	bool m_DrawDebugSpotLightShadowmaps; // 0x163
	bool m_DrawDebugSkyEnvmap; // 0x164
	bool m_DrawDebugVelocityBuffer; // 0x165
	bool m_DrawDebugZBufferEnable; // 0x166
	bool m_DrawDebugHalfResEnvironment; // 0x167
	bool m_DrawDebugDistortion; // 0x168
	bool m_DrawDebugVisibleEntityTypes; // 0x169
	bool m_DrawDebugSkyTextures; // 0x16a
	bool m_DrawDebugMarschnerTextures; // 0x16b
	bool m_DrawDebugDof; // 0x16c
	bool m_DrawDebugDofFullscreen; // 0x16d
	bool m_DrawDebugHalfResHdrTargets; // 0x16e
	bool m_DrawDebugHiZMinMaxBufferEnable; // 0x16f
	bool m_DrawDebugScreenSpaceRaytraceBucketsEnable; // 0x170
	bool m_DrawDebugEmitterSunTransmittanceMaps; // 0x171
	bool m_DrawDebugBlurPyramid; // 0x172
	bool m_DrawDebugOcclusionZBuffer; // 0x173
	bool m_DrawDebugLocalIBLOcclusionZBuffer; // 0x174
	bool m_WireframeEnable; // 0x175
	bool m_ZPassEnable; // 0x176
	bool m_OccluderMeshZPrepassEnable; // 0x177
	bool m_OccluderMeshZPrepassDebugEnable; // 0x178
	bool m_HalfResEnable; // 0x179
	bool m_ForceFullResEnable; // 0x17a
	bool m_HalfResLensFlaresEnable; // 0x17b
	bool m_ForegroundEnable; // 0x17c
	bool m_ForegroundDepthClearEnable; // 0x17d
	bool m_ForegroundZPassEnable; // 0x17e
	bool m_ForegroundTransparentEnable; // 0x17f
	bool m_BilateralHalfResCompositeEnable; // 0x180
	bool m_HalfResDepthMinMaxDitherEnable; // 0x181
	bool m_SkyLightingEnable; // 0x182
	bool m_SkyRenderEnable; // 0x183
	bool m_SkyDepthFogEnable; // 0x184
	bool m_SkyHeightFogEnable; // 0x185
	bool m_SkyForwardScatteringEnable; // 0x186
	bool m_PhysicalSkyEnabled; // 0x187
	bool m_PhysicalSkyForcePrecompute; // 0x188
	bool m_TransparentFoggingEnable; // 0x189
	bool m_DistortionEnable; // 0x18a
	bool m_DistortionHalfResEnable; // 0x18b
	bool m_Distortion8BitEnable; // 0x18c
	bool m_DistortionTilingEnable; // 0x18d
	bool m_StaticEnvmapEnable; // 0x18e
	bool m_CustomEnvmapEnable; // 0x18f
	bool m_CustomEnvmapMipmapClampEnable; // 0x190
	bool m_SkyEnvmapEnable; // 0x191
	bool m_SkyEnvmapMipmapGenEnable; // 0x192
	bool m_SkyEnvmapUpdateEnable; // 0x193
	bool m_SkyEnvmapForceUpdateEnable; // 0x194
	bool m_SkyEnvmapUseFastHDR; // 0x195
	bool m_SkyEnvmapUse32bitLatLongTexture; // 0x196
	bool m_SkyEnvmapDebugColorEnable; // 0x197
	bool m_DynamicEnvmapEnable; // 0x198
	bool m_DynamicEnvmapMipmapGenEnable; // 0x199
	bool m_DrawDebugDynamicEnvmap; // 0x19a
	bool m_DynamicEnvmapShadowmapEnable; // 0x19b
	bool m_DynamicEnvmapShadowmapFarPlaneOverride; // 0x19c
	bool m_DynamicEnvmapShadowmapShadowExtrusionOverride; // 0x19d
	bool m_DrawDebugDynamicEnvmapShadowmap; // 0x19e
	bool m_DrawDynamicEnvmapFrustums; // 0x19f
	bool m_HairCoverageEnable; // 0x1a0
	bool m_SetupJobEnable; // 0x1a1
	bool m_FinishSyncJobsFirstEnable; // 0x1a2
	bool m_BatchMainWorldViewPasses; // 0x1a3
	bool m_BatchOutdoorShadowPasses; // 0x1a4
	bool m_EnableShaderDispatchClearing; // 0x1a5
	unsigned char _0x1a6[0xa];
}; // size = 0x1b0

#endif // FBGEN_WorldRenderSettingsBase_H
