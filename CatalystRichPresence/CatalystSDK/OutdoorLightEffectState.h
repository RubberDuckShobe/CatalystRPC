//
// Generated with FrostbiteGen by Chod
// File: SDK\OutdoorLightEffectState.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OutdoorLightEffectState_H
#define FBGEN_OutdoorLightEffectState_H

#include "Vec3.h"
#include "TextureAsset.h"
#include "Vec2.h"
#include "DataContainer.h"

class OutdoorLightEffectState :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428464C0;
	}
	float m_SunRotationX; // 0x10
	float m_SunRotationY; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_SunColor; // 0x20
	Vec3 m_SkyColor; // 0x30
	Vec3 m_GroundColor; // 0x40
	float m_SkyLightAngleFactor; // 0x50
	float m_SunShadowHeightScale; // 0x54
	TextureAsset* m_CloudShadowTexture; // 0x58
	Vec2 m_CloudShadowSpeed; // 0x60
	float m_CloudShadowSize; // 0x68
	float m_CloudShadowCoverage; // 0x6c
	float m_CloudShadowExponent; // 0x70
	bool m_Enable; // 0x74
	bool m_CloudShadowEnable; // 0x75
	unsigned char _0x76[0xa];
}; // size = 0x80

#endif // FBGEN_OutdoorLightEffectState_H
