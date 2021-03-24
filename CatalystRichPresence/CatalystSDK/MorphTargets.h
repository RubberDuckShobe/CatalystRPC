//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphTargets.h
// Created: Wed Mar 10 19:05:46 2021
//

#ifndef FBGEN_MorphTargets_H
#define FBGEN_MorphTargets_H

#include "ResourceRef.h"
#include "MorphShapes.h"
#include "MorphSliders.h"
#include "Array.h"
#include "Asset.h"

class MorphTargets :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428259D0;
	}
	Array<MeshVariationEntry*> m_Variations; // 0x18
	ResourceRef m_MorphTargetsResource; // 0x20
	Array<MorphPreset*> m_Presets; // 0x28
	MorphShapes* m_Shapes; // 0x30
	MorphSliders* m_FeatureBlends; // 0x38
	Array<MeshAsset*> m_HeadMeshAssets; // 0x40
	Array<MeshAsset*> m_HairMeshAssets; // 0x48
	Array<MeshAsset*> m_BeardMeshAssets; // 0x50
	Array<SliderShaderParameterTemplate*> m_SliderShaderParameterTemplates; // 0x58
	Array<ChannelShaderParameterTemplate*> m_ChannelShaderParameterTemplates; // 0x60
	Array<ColorShaderParameterTemplate*> m_ColorShaderParameterTemplates; // 0x68
	Array<TextureShaderParameterTemplate*> m_TextureShaderParameterTemplates; // 0x70
	float m_EditorVerticalOffset; // 0x78
	bool m_DisableAdditiveBoneOffsets; // 0x7c
	unsigned char _0x7d[0x3];
}; // size = 0x80

#endif // FBGEN_MorphTargets_H
