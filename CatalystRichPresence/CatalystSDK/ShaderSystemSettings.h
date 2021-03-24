//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderSystemSettings.h
// Created: Wed Mar 10 19:01:30 2021
//

#ifndef FBGEN_ShaderSystemSettings_H
#define FBGEN_ShaderSystemSettings_H

#include "QualityLevel.h"
#include "PlatformScalableInt.h"
#include "DataContainer.h"

class ShaderSystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837D60;
	}
	unsigned int m_FrameMemoryBufferSize; // 0x10
	unsigned int m_FrameMemoryBufferSizeTarget; // 0x14
	QualityLevel m_ShaderQualityLevel; // 0x18
	PlatformScalableInt m_StatsDrawCallsWarningLimit; // 0x1c
	PlatformScalableInt m_DrawBlockWarningLimit; // 0x40
	float m_MipmapBias; // 0x64
	float m_MinMipmap; // 0x68
	float m_MaxMipmap; // 0x6c
	int m_ForceMaxAnisotropy; // 0x70
	unsigned int m_MaxAnisotropyLow; // 0x74
	unsigned int m_MaxAnisotropyMedium; // 0x78
	unsigned int m_MaxAnisotropyHigh; // 0x7c
	unsigned int m_MaxAnisotropyUltra; // 0x80
	unsigned int m_Gen4PerformanceAnisotropyThreshold; // 0x84
	unsigned int m_Gen4PerformanceMips; // 0x88
	unsigned int m_Gen4PerformanceZ; // 0x8c
	unsigned int m_DrawCallMultiplier; // 0x90
	unsigned char _0x94[0x4];
	const char* m_SingleFrameBlockLogFileName; // 0x98
	unsigned int m_OverdrawMaxLayerCount; // 0xa0
	float m_InstructionCountScale; // 0xa4
	unsigned int m_OrbisMaxInstructionCount; // 0xa8
	unsigned int m_Gen4aMaxInstructionCount; // 0xac
	unsigned int m_DxMaxInstructionCount; // 0xb0
	unsigned int m_GlslMaxInstructionCount; // 0xb4
	float m_DistortionMaxValueScale; // 0xb8
	float m_SubSurfaceScatteringMaxWidth; // 0xbc
	int m_DispatchPrepareJobCount; // 0xc0
	unsigned int m_DispatchJobMaxChunkCount; // 0xc4
	unsigned int m_MaxInstanceCount; // 0xc8
	unsigned int m_DxVsFunctionConstantBufferSize; // 0xcc
	unsigned int m_DxPsFunctionConstantBufferSize; // 0xd0
	unsigned int m_DxVsExternalConstantBufferSize; // 0xd4
	unsigned int m_DxPsExternalConstantBufferSize; // 0xd8
	unsigned int m_DxDispatchJobMinBlockCount; // 0xdc
	unsigned int m_DxDispatchJobBlocksPerCommandList; // 0xe0
	unsigned int m_DxConstantBufferMethod; // 0xe4
	int m_GlesDispatchJobCount; // 0xe8
	unsigned int m_GlesDispatchJobMinBlockCount; // 0xec
	unsigned int m_GlesDispatchJobBlocksPerCommandList; // 0xf0
	int m_GlesDispatchProcessJobCount; // 0xf4
	unsigned int m_OrbisDispatchJobMinBlockCount; // 0xf8
	unsigned int m_OrbisDispatchJobBlockSize; // 0xfc
	unsigned int m_DispatchJobBlockSize; // 0x100
	unsigned int m_AdvancedStatsSmoothingFactor; // 0x104
	unsigned int m_OrbisDesiredPatchCount; // 0x108
	unsigned int m_MantleDispatchJobMinBlockCount; // 0x10c
	unsigned int m_MantleDispatchJobBlockSize; // 0x110
	unsigned int m_BalsaDispatchJobMinBlockCount; // 0x114
	unsigned int m_BalsaDispatchJobBlockSize; // 0x118
	int m_Override32bitShadowDepthBiasValue; // 0x11c
	float m_Override32bitShadowDepthBiasSlopeValue; // 0x120
	bool m_FlushEnable; // 0x124
	bool m_DispatchDirectEnable; // 0x125
	bool m_DrawStats; // 0x126
	bool m_DrawAdvancedStats; // 0x127
	bool m_DrawZOnly; // 0x128
	bool m_DrawOpaque; // 0x129
	bool m_DrawOpaqueAlphaTest; // 0x12a
	bool m_DrawOpaqueAlphaTestSimple; // 0x12b
	bool m_DrawTransparent; // 0x12c
	bool m_DrawTransparentDecal; // 0x12d
	bool m_DrawTransparentDepth; // 0x12e
	bool m_DrawInlineBlocks; // 0x12f
	bool m_DrawStreamedTextureBlocks; // 0x130
	bool m_DrawNonStreamedTextureBlocks; // 0x131
	bool m_DrawInstancedBlocks; // 0x132
	bool m_DrawNonInstancedBlocks; // 0x133
	bool m_DrawTileClassifiedBlocks; // 0x134
	bool m_TileClassificationEnable; // 0x135
	bool m_OnDemandBuildingEnable; // 0x136
	bool m_OnDemandPrimingEnable; // 0x137
	bool m_OnDemandMonitoringEnable; // 0x138
	bool m_DatabaseLoadingEnable; // 0x139
	bool m_AlphaBlendEnable; // 0x13a
	bool m_ForceDoubleSided; // 0x13b
	bool m_ForcePointFiltering; // 0x13c
	bool m_ZeroViewportEnable; // 0x13d
	bool m_DepthEnable; // 0x13e
	bool m_DepthWriteEnable; // 0x13f
	bool m_DepthTestEnable; // 0x140
	bool m_StencilEnable; // 0x141
	bool m_ClipPlanesEnable; // 0x142
	bool m_SinglePrimitiveEnable; // 0x143
	bool m_DrawCallEnable; // 0x144
	bool m_PixBlockEventsEnable; // 0x145
	bool m_ShaderPixScopeEnable; // 0x146
	bool m_GcmReplayMarkersEnable; // 0x147
	bool m_SortBlocksEnable; // 0x148
	bool m_SimpleTexturesEnable; // 0x149
	bool m_SimpleTextureFilteringEnable; // 0x14a
	bool m_LogEnable; // 0x14b
	bool m_SingleFrameBlockLogEnable; // 0x14c
	bool m_DrawBlockSummaryEnable; // 0x14d
	bool m_ExternalConstantsEnable; // 0x14e
	bool m_SimplePixelShaderEnable; // 0x14f
	bool m_SimpleVertexShaderEnable; // 0x150
	bool m_PseudoInstancingEnable; // 0x151
	bool m_StatesEnable; // 0x152
	bool m_PixelConstantsEnable; // 0x153
	bool m_VertexConstantsEnable; // 0x154
	bool m_PixelConstantRedundancyCheckingEnable; // 0x155
	bool m_VertexConstantRedundancyCheckingEnable; // 0x156
	bool m_ModifiedViewProjectionEnable; // 0x157
	bool m_BoneConstantOptimizationEnable; // 0x158
	bool m_DispatchExecuteEnable; // 0x159
	bool m_DispatchSetupJobEnable; // 0x15a
	bool m_DispatchPrepareBlockEnable; // 0x15b
	bool m_MultisampleEnable; // 0x15c
	bool m_ParallelShaderLoadingEnable; // 0x15d
	bool m_DxTransparencySupersamplingEnable; // 0x15e
	bool m_DxSamplerStatesEnable; // 0x15f
	bool m_DxBatchedSamplerStatesEnable; // 0x160
	bool m_DxBatchedTexturesEnable; // 0x161
	bool m_DxDispatchAsync; // 0x162
	bool m_DxNullContextEnable; // 0x163
	bool m_OrbisDispatchJobEnable; // 0x164
	bool m_OrbisDispatchAsyncEnable; // 0x165
	bool m_OrbisPrebakedDispatchDirectEnable; // 0x166
	bool m_OrbisContextFreeDispatch; // 0x167
	bool m_Dx12CachedInstancingBufferEnable; // 0x168
	bool m_PrebakedDispatchYieldEnable; // 0x169
	bool m_PrebakedDispatchHTileEnable; // 0x16a
	bool m_ShaderDispatchWorkStealingEnable; // 0x16b
	bool m_DispatchStatsGatherEnable; // 0x16c
	bool m_PrebakedDispatchInsertMarks; // 0x16d
	bool m_MantlePrimePipelinesEnable; // 0x16e
	bool m_MantleDispatchJobEnable; // 0x16f
	bool m_MantleDispatchAsyncEnable; // 0x170
	bool m_MantleReZEnable; // 0x171
	bool m_BalsaPrimePipelinesEnable; // 0x172
	bool m_BalsaDispatchJobEnable; // 0x173
	bool m_BalsaDispatchAsyncEnable; // 0x174
	bool m_Dx12PrimePipelinesEnable; // 0x175
	bool m_Dx12PrimePipelinesWaitJoinEnable; // 0x176
	bool m_Dx12PrimeCachedPipelinesEnable; // 0x177
	bool m_Dx12PipelineCachingEnable; // 0x178
	unsigned char _0x179[0x7];
}; // size = 0x180

#endif // FBGEN_ShaderSystemSettings_H
