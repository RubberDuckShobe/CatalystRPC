//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderDepthBiasGroup.h
// Created: Wed Mar 10 19:01:34 2021
//

#ifndef FBGEN_ShaderDepthBiasGroup_H
#define FBGEN_ShaderDepthBiasGroup_H

enum ShaderDepthBiasGroup
{
	ShaderDepthBiasGroup_Default = 0x0,
	ShaderDepthBiasGroup_Decal = 0x1,
	ShaderDepthBiasGroup_EmitterOcclusion = 0x2,
	ShaderDepthBiasGroup_EdgeModel = 0x3,
	ShaderDepthBiasGroup_TerrainDecal = 0x4,
	ShaderDepthBiasGroup_TerrainDecalZPass = 0x5,
	ShaderDepthBiasGroup_Shadow16Bit = 0x6,
	ShaderDepthBiasGroup_Shadow24Bit = 0x7,
	ShaderDepthBiasGroup_Shadow32Bit = 0x8,
	ShaderDepthBiasGroup_ZPass = 0x9,
	ShaderDepthBiasGroup_Emissive = 0xa,
	ShaderDepthBiasGroup_VelocityVector = 0xb,
	ShaderDepthBiasGroupCount = 0xc,
};

#endif // FBGEN_ShaderDepthBiasGroup_H
