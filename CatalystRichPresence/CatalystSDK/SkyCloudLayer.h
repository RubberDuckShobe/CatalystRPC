//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyCloudLayer.h
// Created: Wed Mar 10 19:01:22 2021
//

#ifndef FBGEN_SkyCloudLayer_H
#define FBGEN_SkyCloudLayer_H

#include "Vec3.h"
#include "TextureAsset.h"
struct SkyCloudLayer
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846158;
	}
	Vec3 m_Color; // 0x0
	float m_Altitude; // 0x10
	float m_TileFactor; // 0x14
	float m_Rotation; // 0x18
	float m_Speed; // 0x1c
	float m_SunLightIntensity; // 0x20
	float m_SunLightPower; // 0x24
	float m_AmbientLightIntensity; // 0x28
	float m_AlphaMul; // 0x2c
	TextureAsset* m_Texture; // 0x30
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_SkyCloudLayer_H
