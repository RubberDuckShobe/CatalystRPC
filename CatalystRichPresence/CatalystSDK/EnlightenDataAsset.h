//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenDataAsset.h
// Created: Wed Mar 10 19:06:59 2021
//

#ifndef FBGEN_EnlightenDataAsset_H
#define FBGEN_EnlightenDataAsset_H

#include "Vec3.h"
#include "ResourceRef.h"
#include "TextureAsset.h"
#include "EnlightenOutputFormat.h"
#include "Asset.h"

class EnlightenDataAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428348B0;
	}
	const char* m_Group; // 0x18
	Vec3 m_DistantLightprobePosition; // 0x20
	ResourceRef m_DatabaseResource; // 0x30
	TextureAsset* m_DebugChartTexture; // 0x38
	TextureAsset* m_DebugBackFaceTexture; // 0x40
	TextureAsset* m_SkyVisibilityTexture; // 0x48
	EnlightenOutputFormat m_OutputFormat; // 0x50
	unsigned int m_SystemGridSize; // 0x54
	int m_SystemLightmapSize; // 0x58
	int m_MaxSystemLightmapSize; // 0x5c
	int m_MaxLightmapSize; // 0x60
	float m_SystemInfluenceRadius; // 0x64
	float m_ClusterSize; // 0x68
	unsigned int m_IrBudget; // 0x6c
	unsigned int m_IrradianceQualityMultiplier; // 0x70
	float m_StitchingDistanceMultiplier; // 0x74
	float m_MaxPixelStitchingAngle; // 0x78
	float m_DependencyVisibilityThreshold; // 0x7c
	unsigned int m_SamplesPerCluster; // 0x80
	unsigned int m_MaxCpuThreadCount; // 0x84
	unsigned int m_TerrainProbeRes; // 0x88
	unsigned int m_EnvironmentQuality; // 0x8c
	bool m_DynamicEnable; // 0x90
	bool m_LoadDebugData; // 0x91
	bool m_DynamicGen4aEnable; // 0x92
	bool m_DynamicGen4bEnable; // 0x93
	bool m_DynamicWin32Enable; // 0x94
	bool m_DynamicAndroidEnable; // 0x95
	bool m_DynamiciOSEnable; // 0x96
	bool m_DynamicOSXEnable; // 0x97
	bool m_DirectionalIrradianceRgbEnable; // 0x98
	bool m_DistantLightprobeEnable; // 0x99
	bool m_GridBasedSystemGeneration; // 0x9a
	bool m_VoxelBasedLeafClustering; // 0x9b
	bool m_PixelStitchingEnable; // 0x9c
	bool m_EdgeStitchingEnable; // 0x9d
	bool m_TerrainEnable; // 0x9e
	unsigned char _0x9f[0x1];
}; // size = 0xa0

#endif // FBGEN_EnlightenDataAsset_H
