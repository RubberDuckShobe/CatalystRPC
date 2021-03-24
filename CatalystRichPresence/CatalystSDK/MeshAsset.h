//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshAsset.h
// Created: Wed Mar 10 19:05:57 2021
//

#ifndef FBGEN_MeshAsset_H
#define FBGEN_MeshAsset_H

#include "ResourceRef.h"
#include "MeshLodGroup.h"
#include "EnlightenType.h"
#include "ProceduralAnimationTypeSimple.h"
#include "Array.h"
#include "Asset.h"

class MeshAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142834490;
	}
	Array<unsigned int> m_BlendShapeChannelHashes; // 0x18
	ResourceRef m_MeshSetResource; // 0x20
	ResourceRef m_OccluderMeshResource; // 0x28
	MeshLodGroup* m_LodGroup; // 0x30
	float m_LodScale; // 0x38
	float m_CullScale; // 0x3c
	float m_CoverageValue; // 0x40
	EnlightenType m_EnlightenType; // 0x44
	int m_EnlightenMeshLod; // 0x48
	float m_AutoLightmapUVsMaxDistance; // 0x4c
	float m_AutoLightmapUVsExpansionFactor; // 0x50
	float m_AutoLightmapUVsMaxNormalDeviation; // 0x54
	ProceduralAnimationTypeSimple* m_ProceduralAnimation; // 0x58
	Array<MeshMaterial*> m_Materials; // 0x60
	unsigned int m_NameHash; // 0x68
	bool m_StreamingEnable; // 0x6c
	bool m_OccluderMeshEnable; // 0x6d
	bool m_OccluderHighPriority; // 0x6e
	bool m_OccluderIsConservative; // 0x6f
	bool m_DestructionMaterialEnable; // 0x70
	bool m_EnableEnlightenStaticOverride; // 0x71
	bool m_LightmapUVsScaleCharts; // 0x72
	bool m_AutoLightmapUVs; // 0x73
	unsigned char _0x74[0x4];
}; // size = 0x78

#endif // FBGEN_MeshAsset_H
