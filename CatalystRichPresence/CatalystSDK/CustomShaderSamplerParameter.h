//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomShaderSamplerParameter.h
// Created: Wed Mar 10 19:07:22 2021
//

#ifndef FBGEN_CustomShaderSamplerParameter_H
#define FBGEN_CustomShaderSamplerParameter_H

#include "TextureAsset.h"
#include "TextureType.h"
#include "TextureFilter.h"
#include "TextureAddress.h"
#include "QualityScalableEnabled.h"
#include "RenderBorderColor.h"
#include "RenderFormat.h"
struct CustomShaderSamplerParameter
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837B60;
	}
	TextureAsset* m_DefaultTexture; // 0x0
	TextureType m_TextureType; // 0x8
	unsigned char _0xc[0x4];
	const char* m_Name; // 0x10
	TextureFilter m_MinFilter; // 0x18
	TextureFilter m_MagFilter; // 0x1c
	TextureFilter m_MipFilter; // 0x20
	TextureAddress m_AddressU; // 0x24
	TextureAddress m_AddressV; // 0x28
	TextureAddress m_AddressW; // 0x2c
	QualityScalableEnabled m_AnisotropicQuality; // 0x30
	RenderBorderColor m_BorderColor; // 0x34
	RenderFormat m_TextureFormat; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_CustomShaderSamplerParameter_H
