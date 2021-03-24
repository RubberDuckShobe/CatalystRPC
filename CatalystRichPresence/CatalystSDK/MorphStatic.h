//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphStatic.h
// Created: Wed Mar 10 19:05:47 2021
//

#ifndef FBGEN_MorphStatic_H
#define FBGEN_MorphStatic_H

#include "ResourceRef.h"
#include "MeshAsset.h"
#include "Array.h"
#include "Asset.h"

class MorphStatic :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142825910;
	}
	Array<MeshVariationEntry*> m_RuntimeVariations; // 0x18
	ResourceRef m_MorphResource; // 0x20
	MeshAsset* m_RuntimeHeadBase; // 0x28
	MeshAsset* m_RuntimeHair; // 0x30
	MeshAsset* m_RuntimeBeard; // 0x38
	int m_SelectedPresetIndex; // 0x40
	unsigned char _0x44[0x4];
	Array<VariationLink> m_VariationLinks; // 0x48
	Array<ShaderParameter*> m_SliderParameters; // 0x50
	Array<ShaderParameter*> m_ChannelParameters; // 0x58
	Array<ShaderParameter*> m_ColorParameters; // 0x60
	Array<ShaderParameter*> m_TextureParameters; // 0x68
}; // size = 0x70

#endif // FBGEN_MorphStatic_H
