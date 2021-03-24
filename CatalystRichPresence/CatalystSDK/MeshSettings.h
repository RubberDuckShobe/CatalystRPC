//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshSettings.h
// Created: Wed Mar 10 19:05:54 2021
//

#ifndef FBGEN_MeshSettings_H
#define FBGEN_MeshSettings_H

#include "QualityLevel.h"
#include "DataContainer.h"

class MeshSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834130;
	}
	const char* m_OverrideShadersShaderName; // 0x10
	const char* m_OverrideShadersMeshName; // 0x18
	int m_ForceLod; // 0x20
	float m_GlobalLodScale; // 0x24
	float m_ShadowDistanceScale; // 0x28
	float m_TessellationMaxFactor; // 0x2c
	float m_TessellationForceTessellationFactor; // 0x30
	float m_TessellationMaxDistance; // 0x34
	float m_TessellationMaxDistanceFade; // 0x38
	float m_TessellationMaxDistanceScale; // 0x3c
	float m_TessellationMaxDistanceCullScale; // 0x40
	QualityLevel m_CastShadowQualityLevel; // 0x44
	QualityLevel m_CastPlanarReflectionQualityLevel; // 0x48
	QualityLevel m_CastDynamicReflectionQualityLevel; // 0x4c
	QualityLevel m_CastStaticReflectionQualityLevel; // 0x50
	bool m_LoadingEnabled; // 0x54
	bool m_ForceLowestLodInPlanarReflectionsEnable; // 0x55
	bool m_LodFadeEnable; // 0x56
	bool m_TessellationEnable; // 0x57
	bool m_TessellationBackFaceCullingEnable; // 0x58
	bool m_TessellationScreenSpaceAdativeEnable; // 0x59
	bool m_PlanarReflectionTessellationEnable; // 0x5a
	bool m_DynamicEnvmapTessellationEnable; // 0x5b
	unsigned char _0x5c[0x4];
}; // size = 0x60

#endif // FBGEN_MeshSettings_H
