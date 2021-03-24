//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyEffectState.h
// Created: Wed Mar 10 19:01:21 2021
//

#ifndef FBGEN_SkyEffectState_H
#define FBGEN_SkyEffectState_H

#include "Vec3.h"
#include "SkyCloudLayer.h"
#include "TextureAsset.h"
#include "DataContainer.h"

class SkyEffectState :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846400;
	}
	float m_SunSize; // 0x10
	float m_SunScale; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_CloudLayerSunColor; // 0x20
	SkyCloudLayer m_CloudLayer1; // 0x30
	SkyCloudLayer m_CloudLayer2; // 0x70
	float m_SkyGradientScale; // 0xb0
	unsigned char _0xb4[0x4];
	TextureAsset* m_SkyGradientTexture; // 0xb8
	float m_PanoramicUVMinX; // 0xc0
	float m_PanoramicUVMaxX; // 0xc4
	float m_PanoramicUVMinY; // 0xc8
	float m_PanoramicUVMaxY; // 0xcc
	float m_PanoramicTileFactor; // 0xd0
	float m_PanoramicRotation; // 0xd4
	TextureAsset* m_PanoramicTexture; // 0xd8
	TextureAsset* m_PanoramicAlphaTexture; // 0xe0
	TextureAsset* m_CloudLayerMaskTexture; // 0xe8
	TextureAsset* m_StaticEnvmapTexture; // 0xf0
	float m_WindDirection; // 0xf8
	bool m_Enable; // 0xfc
	unsigned char _0xfd[0x3];
}; // size = 0x100

#endif // FBGEN_SkyEffectState_H
