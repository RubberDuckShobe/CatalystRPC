//
// Generated with FrostbiteGen by Chod
// File: SDK\ShaderBlendMode.h
// Created: Wed Mar 10 19:01:36 2021
//

#ifndef FBGEN_ShaderBlendMode_H
#define FBGEN_ShaderBlendMode_H

enum ShaderBlendMode
{
	ShaderBlendMode_Lerp = 0x0,
	ShaderBlendMode_Additive = 0x1,
	ShaderBlendMode_Multiply = 0x2,
	ShaderBlendMode_LerpPremultiplied = 0x3,
	ShaderBlendMode_PremultipliedColor = 0x4,
	ShaderBlendMode_DecalLerpNormal = 0x5,
	ShaderBlendMode_DecalLerpSmoothness = 0x6,
	ShaderBlendMode_DecalMultiplySmoothness = 0x7,
	ShaderBlendMode_DecalAddSmoothness = 0x8,
	ShaderBlendMode_DecalLerpNormalSmoothness = 0x9,
	ShaderBlendMode_DecalLerpReflectance = 0xa,
	ShaderBlendMode_DecalMultiplyReflectance = 0xb,
	ShaderBlendMode_DecalAddReflectance = 0xc,
	ShaderBlendMode_DecalLerpMetalMask = 0xd,
	ShaderBlendMode_DecalMultiplyMetalMask = 0xe,
	ShaderBlendMode_DecalAddMetalMask = 0xf,
	ShaderBlendMode_DecalLerpBaseColor = 0x10,
	ShaderBlendMode_DecalMultiplyBaseColor = 0x11,
	ShaderBlendMode_DecalAddBaseColor = 0x12,
	ShaderBlendMode_DecalLerpBaseColorMetalMaskReflectance = 0x13,
	ShaderBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 0x14,
	ShaderBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 0x15,
	ShaderBlendMode_DecalLerpEverything = 0x16,
};

#endif // FBGEN_ShaderBlendMode_H
