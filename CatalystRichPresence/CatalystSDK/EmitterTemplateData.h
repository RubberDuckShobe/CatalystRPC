//
// Generated with FrostbiteGen by Chod
// File: SDK\EmitterTemplateData.h
// Created: Wed Mar 10 19:07:00 2021
//

#ifndef FBGEN_EmitterTemplateData_H
#define FBGEN_EmitterTemplateData_H

#include "ProcessorData.h"
#include "Vec3.h"
#include "EmittableType.h"
#include "EmittableAlignment.h"
#include "MeshAsset.h"
#include "ObjectVariation.h"
#include "SurfaceShaderInstanceDataStruct.h"
#include "EmitterDrawOrder.h"
#include "Array.h"
#include "DataContainer.h"

class EmitterTemplateData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DAA60;
	}
	ProcessorData* m_RootProcessor; // 0x10
	unsigned int m_MaxCount; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_WorldAlignmentDirection; // 0x20
	Vec3 m_OrientToPosition; // 0x30
	float m_Lifetime; // 0x40
	float m_TimeScale; // 0x44
	unsigned int m_LifetimeFrameCount; // 0x48
	float m_KillRibbonTailDistance; // 0x4c
	EmittableType m_EmittableType; // 0x50
	EmittableAlignment m_EmittableAlignment; // 0x54
	float m_MotionStretchMultiplier; // 0x58
	float m_MotionStretchViewMultiplier; // 0x5c
	float m_MotionStretchLengthClamp; // 0x60
	float m_MotionStretchRelativeLengthClamp; // 0x64
	MeshAsset* m_Mesh; // 0x68
	ObjectVariation* m_ObjectVariation; // 0x70
	float m_EmissiveExposureFactor; // 0x78
	float m_VertexPixelLightingBlendFactor; // 0x7c
	float m_GlobalLocalNormalBlendFactor; // 0x80
	float m_SoftParticlesFadeDistanceMultiplier; // 0x84
	float m_LightWrapAroundFactor; // 0x88
	float m_BentNormalFactor; // 0x8c
	float m_LightMultiplier; // 0x90
	float m_BendingFactor; // 0x94
	float m_MicroVariationSmoothingFactor; // 0x98
	float m_SunVolumetricShadowAbsorptionScale; // 0x9c
	float m_SunVolumetricShadowAbsorptionR; // 0xa0
	float m_SunVolumetricShadowAbsorptionG; // 0xa4
	float m_SunVolumetricShadowAbsorptionB; // 0xa8
	float m_SunVolumetricShadowPhaseG0; // 0xac
	float m_SunVolumetricShadowPhaseG1; // 0xb0
	float m_SunVolumetricShadowOffset; // 0xb4
	float m_CameraBias; // 0xb8
	float m_FlipUProbability; // 0xbc
	float m_FlipVProbability; // 0xc0
	unsigned char _0xc4[0x4];
	SurfaceShaderInstanceDataStruct m_Shader; // 0xc8
	float m_AnimationFrameCount; // 0xf0
	float m_AnimationFrameColumnCount; // 0xf4
	EmitterDrawOrder m_EmitterDrawOrder; // 0xf8
	float m_ParticleCullingFactor; // 0xfc
	float m_MinSpawnDistance; // 0x100
	float m_MaxSpawnDistance; // 0x104
	float m_EmitterMaxSpawnDistance; // 0x108
	float m_MinScreenArea; // 0x10c
	float m_MeshCullingDistance; // 0x110
	int m_SkipUpdateMaxCount; // 0x114
	float m_PreciseWindAndForceMaxDistance; // 0x118
	float m_TurbulenceMaxDistance; // 0x11c
	float m_DistanceScaleLength; // 0x120
	float m_DistanceScaleNearValue; // 0x124
	float m_DistanceScaleFarValue; // 0x128
	float m_SpeedNormalizationValue; // 0x12c
	float m_WindSpeedNormalizationValue; // 0x130
	float m_TravelledDistanceNormalizationValue; // 0x134
	Array<EffectParameter*> m_PerParticleEffectParameters; // 0x138
	float m_MinDistanceTravelledBeforeSpawn; // 0x140
	float m_CullFadeNearDistance; // 0x144
	float m_CullFadeNearRange; // 0x148
	float m_CullFadeFarDistance; // 0x14c
	float m_CullFadeFarRange; // 0x150
	unsigned char _0x154[0x4];
	const char* m_DebugName; // 0x158
	bool m_RepeatParticleSpawning; // 0x160
	bool m_FollowSpawnSource; // 0x161
	bool m_FollowSpawnSourceVelocity; // 0x162
	bool m_KillParticlesWithEmitter; // 0x163
	bool m_SmoothRibbonSpawn; // 0x164
	bool m_ExclusionVolumeCullEnable; // 0x165
	bool m_Emissive; // 0x166
	bool m_Opaque; // 0x167
	bool m_MeshParticlesMotionBlur; // 0x168
	bool m_ReceiveSunShadow; // 0x169
	bool m_ForceNiceSorting; // 0x16a
	bool m_LocalSpace; // 0x16b
	bool m_AllowScale; // 0x16c
	bool m_CameraSpace; // 0x16d
	bool m_TransparencySunShadowEnable; // 0x16e
	bool m_SunVolumetricShadowEnable; // 0x16f
	bool m_CastPlanarReflectionEnable; // 0x170
	bool m_ForceFullRes; // 0x171
	bool m_FogFade; // 0x172
	bool m_LockRibbonDirection; // 0x173
	bool m_SkipSpawnOutsideView; // 0x174
	bool m_PauseSimulationWhenCulled; // 0x175
	bool m_AcceptGlobalParameter1; // 0x176
	bool m_AcceptGlobalParameter2; // 0x177
	bool m_AcceptGlobalParameter3; // 0x178
	bool m_SkipNearCameraFade; // 0x179
	bool m_EmitterWindEvaluationEnable; // 0x17a
	bool m_EmittableWindEvaluationEnable; // 0x17b
	unsigned char _0x17c[0x4];
}; // size = 0x180

#endif // FBGEN_EmitterTemplateData_H
