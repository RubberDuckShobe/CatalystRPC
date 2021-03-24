//
// Generated with FrostbiteGen by Chod
// File: SDK\GameRenderSettings.h
// Created: Wed Mar 10 19:06:40 2021
//

#ifndef FBGEN_GameRenderSettings_H
#define FBGEN_GameRenderSettings_H

#include "DataContainer.h"

class GameRenderSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834730;
	}
	unsigned int m_InactiveSkipFrameCount; // 0x10
	float m_ResolutionScale; // 0x14
	float m_ResolutionScaleMax; // 0x18
	float m_DynamicScalingTargetGpuTimeInMs; // 0x1c
	float m_DynamicScalingDeadZoneInMs; // 0x20
	unsigned int m_DynamicScalingRequiredRecommendationForUpscaleInFrames; // 0x24
	float m_DynamicScaling30hzDeadZoneInMs; // 0x28
	float m_DynamicScaling30hzMaxScale; // 0x2c
	float m_DynamicScaling30hzTargetGpuTimeInMs; // 0x30
	unsigned int m_DynamicScaling30hzRequiredRecommendationForUpscaleInFrames; // 0x34
	float m_DynamicScaling60hzDeadZoneInMs; // 0x38
	float m_DynamicScaling60hzMaxScale; // 0x3c
	float m_DynamicScaling60hzTargetGpuTimeInMs; // 0x40
	unsigned int m_DynamicScaling60hzRequiredRecommendationForUpscaleInFrames; // 0x44
	int m_MantleEnable; // 0x48
	float m_NearPlane; // 0x4c
	float m_ViewDistance; // 0x50
	float m_ForceFov; // 0x54
	float m_FovMultiplier; // 0x58
	float m_ForceOrthoViewSize; // 0x5c
	float m_EdgeModelScreenAreaScale; // 0x60
	float m_EdgeModelViewDistance; // 0x64
	int m_EdgeModelForceLod; // 0x68
	float m_EdgeModelLodScale; // 0x6c
	float m_StaticModelPartOcclusionMaxScreenArea; // 0x70
	unsigned int m_StaticModelCullJobCount; // 0x74
	unsigned int m_SplitScreenTestViewCount; // 0x78
	unsigned int m_SplitScreenTestCase; // 0x7c
	float m_ForceBlurAmount; // 0x80
	float m_ForceWorldFadeAmount; // 0x84
	float m_StereoCrosshairMaxHitDepth; // 0x88
	float m_StereoCrosshairRadius; // 0x8c
	float m_StereoCrosshairDampingFactor; // 0x90
	unsigned int m_UIBlurKernelRadius; // 0x94
	bool m_Enable; // 0x98
	bool m_NullRendererEnable; // 0x99
	bool m_JobEnable; // 0x9a
	bool m_BuildJobSyncEnable; // 0x9b
	bool m_DrawDebugDynamicTextureArrays; // 0x9c
	bool m_DrawDebugInfo; // 0x9d
	bool m_DrawScreenInfo; // 0x9e
	bool m_DynamicScalingDebugMode; // 0x9f
	bool m_DynamicScalingPaused; // 0xa0
	bool m_DynamicScalingEnabled; // 0xa1
	bool m_ClampGpuMemory; // 0xa2
	bool m_Fullscreen; // 0xa3
	bool m_ForceVSyncEnable; // 0xa4
	bool m_MovieVSyncEnable; // 0xa5
	bool m_VSyncFlashTestEnable; // 0xa6
	bool m_OutputBrightnessTestEnable; // 0xa7
	bool m_GlEnable; // 0xa8
	bool m_Dx11Enable; // 0xa9
	bool m_Dx12Enable; // 0xaa
	bool m_BalsaEnable; // 0xab
	bool m_Gen4bColorRemap; // 0xac
	bool m_GpuTextureCompressorEnable; // 0xad
	bool m_MeshWorldEnable; // 0xae
	bool m_EmittersEnable; // 0xaf
	bool m_EntityRenderEnable; // 0xb0
	bool m_DebugRendererEnable; // 0xb1
	bool m_DebugRenderServiceEnable; // 0xb2
	bool m_InitialClearEnable; // 0xb3
	bool m_GpuProfilerEnable; // 0xb4
	bool m_ForceOrthoViewEnable; // 0xb5
	bool m_ForceSquareOrthoView; // 0xb6
	bool m_DestructionVolumeDrawEnable; // 0xb7
	bool m_EdgeModelsEnable; // 0xb8
	bool m_EdgeModelCastShadowsEnable; // 0xb9
	bool m_EdgeModelDepthBiasEnable; // 0xba
	bool m_EdgeModelShadowDepthBiasEnable; // 0xbb
	bool m_EdgeModelUseMainLodEnable; // 0xbc
	bool m_EdgeModelUseLodBox; // 0xbd
	bool m_EdgeModelCullEnable; // 0xbe
	bool m_EdgeModelFrustumCullEnable; // 0xbf
	bool m_EdgeModelDrawBoxes; // 0xc0
	bool m_EdgeModelDrawStats; // 0xc1
	bool m_StaticModelEnable; // 0xc2
	bool m_StaticModelMeshesEnable; // 0xc3
	bool m_StaticModelZPassEnable; // 0xc4
	bool m_StaticModelPartCullEnable; // 0xc5
	bool m_StaticModelPartFrustumCullEnable; // 0xc6
	bool m_StaticModelPartOcclusionCullEnable; // 0xc7
	bool m_StaticModelPartShadowCullEnable; // 0xc8
	bool m_StaticModelDrawBoxes; // 0xc9
	bool m_StaticModelDrawStats; // 0xca
	bool m_StaticModelCullSpuJobEnable; // 0xcb
	bool m_StaticModelSurfaceShaderTerrainAccessEnable; // 0xcc
	bool m_LockView; // 0xcd
	bool m_ResetLockedView; // 0xce
	bool m_InfiniteProjectionMatrixEnable; // 0xcf
	bool m_SecondaryStreamingViewEnable; // 0xd0
	bool m_FadeEnable; // 0xd1
	bool m_FadeWaitingEnable; // 0xd2
	bool m_FadeInverted; // 0xd3
	bool m_BlurEnable; // 0xd4
	bool m_UIBlurEnable; // 0xd5
	bool m_UIBlurDownsampleBoxBlur; // 0xd6
	unsigned char _0xd7[0x1];
}; // size = 0xd8

#endif // FBGEN_GameRenderSettings_H
