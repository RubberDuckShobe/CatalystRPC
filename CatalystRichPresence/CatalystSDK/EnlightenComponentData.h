//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenComponentData.h
// Created: Wed Mar 10 19:06:59 2021
//

#ifndef FBGEN_EnlightenComponentData_H
#define FBGEN_EnlightenComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "SkyBoxBlendMode.h"
#include "VisualEnvironmentComponentData.h"

class EnlightenComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846B20;
	}
	Vec3 m_TerrainColor; // 0x80
	Vec3 m_SkyBoxSkyColor; // 0x90
	Vec3 m_SkyBoxGroundColor; // 0xa0
	Vec3 m_SkyBoxSunLightColor; // 0xb0
	Vec3 m_SkyBoxBackLightColor; // 0xc0
	Vec3 m_OpaqueAlphaTestSimpleScale; // 0xd0
	Realm m_Realm; // 0xe0
	float m_BounceScale; // 0xe4
	float m_SunScale; // 0xe8
	float m_CullDistance; // 0xec
	float m_CullRadius; // 0xf0
	SkyBoxBlendMode m_SkyBoxBlendMode; // 0xf4
	float m_SkyBoxBlend; // 0xf8
	float m_SkyBoxSunLightColorSize; // 0xfc
	float m_SkyBoxBackLightColorSize; // 0x100
	float m_SkyBoxBackLightRotationX; // 0x104
	float m_SkyBoxBackLightRotationY; // 0x108
	bool m_SkyBoxEnable; // 0x10c
	unsigned char _0x10d[0x3];
}; // size = 0x110

#endif // FBGEN_EnlightenComponentData_H
