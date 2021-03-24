//
// Generated with FrostbiteGen by Chod
// File: SDK\GlobalPostProcessSettings.h
// Created: Wed Mar 10 19:06:38 2021
//

#ifndef FBGEN_GlobalPostProcessSettings_H
#define FBGEN_GlobalPostProcessSettings_H

#include "PostProcessDebugMode.h"
#include "Vec4.h"
#include "Vec3.h"
#include "AutoExposureMethod.h"
#include "ColorGradingQualityMode.h"
#include "Vec2.h"
#include "DofMethod.h"
#include "BlurMethod.h"
#include "DynamicAOMethod.h"
#include "ScreenSpaceRaytraceAsyncComputeMethod.h"
#include "BlurFilter.h"
#include "DataContainer.h"

class GlobalPostProcessSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142838120;
	}
	PostProcessDebugMode m_DebugMode; // 0x10
	unsigned int m_DebugModeStep; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_ForceBloomScale; // 0x20
	Vec4 m_ForceVignetteColor; // 0x30
	Vec3 m_FilmGrainColorScale; // 0x40
	Vec3 m_Brightness; // 0x50
	Vec3 m_Contrast; // 0x60
	Vec3 m_Saturation; // 0x70
	float m_ForceEVCompensation; // 0x80
	float m_ForceEV; // 0x84
	int m_BloomFFTMipLevel; // 0x88
	int m_BloomFFTProceduralKernelSize; // 0x8c
	unsigned int m_BlurPyramidFinalLevel; // 0x90
	float m_BlurPyramidLdrRange; // 0x94
	float m_DebugColorGraphMinValue; // 0x98
	float m_DebugColorGraphMaxValue; // 0x9c
	int m_DebugColorGraphLineNumber; // 0xa0
	AutoExposureMethod m_AutoExposureMethod; // 0xa4
	unsigned int m_AutoExposureHistogramBinCount; // 0xa8
	unsigned int m_AutoExposureHistogramMipUsed; // 0xac
	float m_AutoExposureHistogramMinValue; // 0xb0
	float m_AutoExposureHistogramMaxValue; // 0xb4
	unsigned int m_DownsampleAverageStartMipmap; // 0xb8
	int m_ForceDofEnable; // 0xbc
	float m_ForceDofBlurFactor; // 0xc0
	float m_ForceDofBlurAdd; // 0xc4
	float m_ForceDofFocusDistance; // 0xc8
	float m_ForceSimpleDofNearStart; // 0xcc
	float m_ForceSimpleDofNearEnd; // 0xd0
	float m_ForceSimpleDofFarStart; // 0xd4
	float m_ForceSimpleDofFarEnd; // 0xd8
	float m_ForceSimpleDofBlurMax; // 0xdc
	float m_ForceSpriteDofNearStart; // 0xe0
	float m_ForceSpriteDofNearEnd; // 0xe4
	float m_ForceSpriteDofFarStart; // 0xe8
	float m_ForceSpriteDofFarEnd; // 0xec
	float m_ForceSpriteDofBlurMax; // 0xf0
	Vec2 m_ForceVignetteScale; // 0xf4
	float m_ForceVignetteExponent; // 0xfc
	float m_FxaaComputeSubPixelRemoval; // 0x100
	float m_FxaaComputeContrastThreshold; // 0x104
	int m_ForceTonemapMethod; // 0x108
	ColorGradingQualityMode m_ColorGradingHighQualityMode; // 0x10c
	int m_ForceChromostereopsisEnable; // 0x110
	int m_ForceChromostereopsisOffset; // 0x114
	float m_ForceChromostereopsisScale; // 0x118
	Vec2 m_FilmGrainTextureScale; // 0x11c
	float m_LensScopeColorScale; // 0x124
	float m_HalfResEdgeDetectThreshold; // 0x128
	float m_Hue; // 0x12c
	float m_UIBrightnessNorm; // 0x130
	float m_UserBrightnessMin; // 0x134
	float m_UserBrightnessMax; // 0x138
	float m_UserBrightnessAddScale; // 0x13c
	float m_UserBrightnessMulScale; // 0x140
	float m_LUTGammaR; // 0x144
	float m_LUTGammaG; // 0x148
	float m_LUTGammaB; // 0x14c
	float m_LUTGammaCurbOffset; // 0x150
	DofMethod m_DofMethod; // 0x154
	BlurMethod m_BlurMethod; // 0x158
	float m_SpriteDofMinRadiusLayer1; // 0x15c
	float m_SpriteDofMinRadiusLayer2; // 0x160
	float m_SpriteDofMaxRadiusGatherPass; // 0x164
	float m_SpriteDofMergeColorThreshold; // 0x168
	float m_SpriteDofMergeRadiusThreshold; // 0x16c
	float m_SpriteDofDepthDiscontinuityThreshold; // 0x170
	unsigned int m_SpriteDofActiveLayer; // 0x174
	float m_SpriteDofInfocusMultiplier; // 0x178
	float m_SpriteDofMaxBlurScale; // 0x17c
	float m_SpriteDofEnergyScaler; // 0x180
	unsigned int m_SpriteDofMultilayerForegroundCount; // 0x184
	float m_SpriteDofMultilayerForegroundCocSpan; // 0x188
	float m_SpriteDofForegroundReweightExponent; // 0x18c
	float m_SpriteDofMultilayerForegroundLayerExtension; // 0x190
	unsigned int m_SpriteDofMultilayerForegroundActiveLayer; // 0x194
	DynamicAOMethod m_DynamicAOMethod; // 0x198
	ScreenSpaceRaytraceAsyncComputeMethod m_ScreenSpaceRaytraceAsyncComputeMethod; // 0x19c
	float m_ScreenSpaceRaytraceThicknessFadeScale; // 0x1a0
	float m_ScreenSpaceRaytraceReuseAllocWhitePoint; // 0x1a4
	int m_ScreenSpaceRaytraceDebug; // 0x1a8
	int m_ScreenSpaceRaytraceQuality; // 0x1ac
	unsigned int m_IronsightsDofResolutionFactor; // 0x1b0
	BlurFilter m_IronsightsBlurFilter; // 0x1b4
	BlurFilter m_IronsightsBlurFilter720p; // 0x1b8
	float m_IronsightsHDRCompression; // 0x1bc
	float m_IronsightsCoCScale; // 0x1c0
	float m_OverrideIronsightsHipFade; // 0x1c4
	float m_OverrideIronsightsStartFade; // 0x1c8
	float m_OverrideIronsightsFocalDistance; // 0x1cc
	float m_OverrideIronsightsDofCircleDistance; // 0x1d0
	unsigned int m_DynamicAOSampleTemporalCount; // 0x1d4
	unsigned int m_DynamicAOSampleStepCount; // 0x1d8
	unsigned int m_DynamicAOSampleDirCount; // 0x1dc
	float m_DynamicAOMaxFootprintRadius; // 0x1e0
	unsigned int m_DynamicAOBilateralBlurRadius; // 0x1e4
	float m_DynamicAOBilateralBlurSharpness; // 0x1e8
	float m_DynamicAONormalInfluence; // 0x1ec
	float m_DynamicAOTemporalSharpness; // 0x1f0
	float m_DynamicAOTemporalMinHistoryBlendFactor; // 0x1f4
	float m_DynamicAOTemporalMaxHistoryBlendFactor; // 0x1f8
	float m_DynamicAOTemporalDisocclusionRejectionFactor; // 0x1fc
	float m_DynamicAOTemporalLumaContrastFactor; // 0x200
	float m_DynamicAOTemporalMotionSharpeningFactor; // 0x204
	float m_DynamicAOTemporalAntiflickerMultiplier; // 0x208
	float m_DynamicAOTemporalAntiflickerInDistance; // 0x20c
	float m_DynamicAOTemporalAntiflickerOutDistance; // 0x210
	unsigned int m_DrawDebugDynamicAOTemporalAccumulationCount; // 0x214
	unsigned int m_DrawDebugDynamicAOTemporalDebugMode; // 0x218
	float m_DrawDebugDynamicAOTemporalMaxDistance; // 0x21c
	bool m_HdrBlurEnable; // 0x220
	bool m_EVClampEnable; // 0x221
	bool m_AdaptationTimeEnable; // 0x222
	bool m_ForceEVCompensationEnable; // 0x223
	bool m_ForceEVEnable; // 0x224
	bool m_DrawDebugInfo; // 0x225
	bool m_DrawExposureDebugInfo; // 0x226
	bool m_RenderTargetLoadOptsEnable; // 0x227
	bool m_BlurEnable; // 0x228
	bool m_QuarterDownsamplingEnable; // 0x229
	bool m_BlurBlendEnable; // 0x22a
	bool m_BloomEnable; // 0x22b
	bool m_BloomDirectionalLinearFilterEnable; // 0x22c
	bool m_BloomDirectionalESRAMEnable; // 0x22d
	bool m_BloomTestEnable; // 0x22e
	bool m_BloomFFTEnable; // 0x22f
	bool m_DrawDebugFFTEnable; // 0x230
	bool m_BlurPyramidEnable; // 0x231
	bool m_BlurPyramidQuarterResEnable; // 0x232
	bool m_BlurPyramidHdrEnable; // 0x233
	bool m_BlurPyramidFastHdrEnable; // 0x234
	bool m_BlurPyramidSinglePassEnable; // 0x235
	bool m_DebugColorGraphEnable; // 0x236
	bool m_DownsampleLogAverageEnable; // 0x237
	bool m_DownsampleBeforeBlurEnable; // 0x238
	bool m_VignetteEnable; // 0x239
	bool m_FxaaComputeDebug; // 0x23a
	bool m_DrawDebugParametricTonemap; // 0x23b
	bool m_ColorGradingEnable; // 0x23c
	bool m_ColorGradingComputeEnable; // 0x23d
	bool m_ColorGradingDebugEnable; // 0x23e
	bool m_ColorTransformEnable; // 0x23f
	bool m_ColorGradingForceUpdateAlways; // 0x240
	bool m_FilmGrainEnable; // 0x241
	bool m_FilmGrainLinearFilteringEnable; // 0x242
	bool m_FilmGrainRandomEnable; // 0x243
	bool m_LensScopeEnable; // 0x244
	bool m_UserBrightnessLUTEnable; // 0x245
	bool m_DrawDebugUserBrightnessLUT; // 0x246
	bool m_SpriteDofEnable; // 0x247
	bool m_SpriteDofMergeEnable; // 0x248
	bool m_SpriteDofForegroundEnable; // 0x249
	bool m_SpriteDofDepthFilterEnable; // 0x24a
	bool m_SpriteDofBuffer32bitEnable; // 0x24b
	bool m_SpriteDofHalfResolutionEnable; // 0x24c
	bool m_SpriteDofInstancingEnable; // 0x24d
	bool m_SpriteDofNearGatherEnable; // 0x24e
	bool m_SpriteDofMultilayerForegroundEnable; // 0x24f
	bool m_SpriteDofDebugEnable; // 0x250
	bool m_DynamicAOEnable; // 0x251
	bool m_SsaoBlurEnable; // 0x252
	bool m_ScreenSpaceRaytraceEnable; // 0x253
	bool m_ScreenSpaceRaytraceDeferredResolveEnable; // 0x254
	bool m_ScreenSpaceRaytraceSeparateCoverageEnable; // 0x255
	bool m_ScreenSpaceRaytraceFullresEnable; // 0x256
	bool m_ScreenSpaceRaytrace32BitEnable; // 0x257
	bool m_ScreenSpaceRaytraceReuseAllocEnable; // 0x258
	bool m_IronsightsDofEnable; // 0x259
	bool m_ForceIronsightsDofActive; // 0x25a
	bool m_OverrideIronsightsDofParams; // 0x25b
	bool m_OverrideIronsightsDofCircleBlur; // 0x25c
	bool m_ForceLensScopeActive; // 0x25d
	bool m_DynamicAOHorizonBased; // 0x25e
	bool m_DynamicAOBilateralBlurEnable; // 0x25f
	bool m_DynamicAONormalEnable; // 0x260
	bool m_DynamicAOUseAsyncCompute; // 0x261
	bool m_DynamicAOTemporalFilterEnable; // 0x262
	bool m_DynamicAOTemporalSmoothHistoryFiltering; // 0x263
	bool m_DrawDebugDynamicAOTemporalEnable; // 0x264
	unsigned char _0x265[0xb];
}; // size = 0x270

#endif // FBGEN_GlobalPostProcessSettings_H
