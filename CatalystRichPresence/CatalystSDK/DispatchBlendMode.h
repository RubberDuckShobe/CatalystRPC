//
// Generated with FrostbiteGen by Chod
// File: SDK\DispatchBlendMode.h
// Created: Wed Mar 10 19:07:09 2021
//

#ifndef FBGEN_DispatchBlendMode_H
#define FBGEN_DispatchBlendMode_H

enum DispatchBlendMode
{
	DispatchBlendMode_NoBlend = 0x0,
	DispatchBlendMode_ZOnly = 0x1,
	DispatchBlendMode_DebugOverdraw = 0x2,
	DispatchBlendMode_DebugShaderCost = 0x3,
	DispatchBlendMode_Lerp = 0x4,
	DispatchBlendMode_Additive = 0x5,
	DispatchBlendMode_Multiply = 0x6,
	DispatchBlendMode_DualSourceColor = 0x7,
	DispatchBlendMode_DecalLerpNormal = 0x8,
	DispatchBlendMode_DecalLerpSmoothness = 0x9,
	DispatchBlendMode_DecalMultiplySmoothness = 0xa,
	DispatchBlendMode_DecalAddSmoothness = 0xb,
	DispatchBlendMode_DecalLerpNormalSmoothness = 0xc,
	DispatchBlendMode_DecalLerpReflectance = 0xd,
	DispatchBlendMode_DecalMultiplyReflectance = 0xe,
	DispatchBlendMode_DecalAddReflectance = 0xf,
	DispatchBlendMode_DecalLerpMetalMask = 0x10,
	DispatchBlendMode_DecalMultiplyMetalMask = 0x11,
	DispatchBlendMode_DecalAddMetalMask = 0x12,
	DispatchBlendMode_DecalLerpBaseColor = 0x13,
	DispatchBlendMode_DecalMultiplyBaseColor = 0x14,
	DispatchBlendMode_DecalAddBaseColor = 0x15,
	DispatchBlendMode_DecalLerpBaseColorMetalMaskReflectance = 0x16,
	DispatchBlendMode_DecalMultiplyBaseColorMetalMaskReflectance = 0x17,
	DispatchBlendMode_DecalLerpNormalSmoothnessMultiplyOthers = 0x18,
	DispatchBlendMode_DecalLerpEverything = 0x19,
	DispatchBlendModeCount = 0x1a,
};

#endif // FBGEN_DispatchBlendMode_H
