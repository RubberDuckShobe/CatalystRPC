//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyCelestialSingleComponentData.h
// Created: Wed Mar 10 19:01:22 2021
//

#ifndef FBGEN_SkyCelestialSingleComponentData_H
#define FBGEN_SkyCelestialSingleComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "TextureAsset.h"
#include "Vec2.h"
#include "QualityScalableBool.h"
#include "VisualEnvironmentComponentData.h"

class SkyCelestialSingleComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846700;
	}
	Vec3 m_Tint; // 0x80
	Realm m_Realm; // 0x90
	unsigned int m_DrawOrder; // 0x94
	TextureAsset* m_Texture; // 0x98
	Vec2 m_UVStart; // 0xa0
	Vec2 m_UVEnd; // 0xa8
	float m_SkyEnvmapTintScale; // 0xb0
	float m_Longitude; // 0xb4
	float m_Latitude; // 0xb8
	float m_Rotation; // 0xbc
	Vec2 m_Scale; // 0xc0
	bool m_Enable; // 0xc8
	QualityScalableBool m_EnabledOnQualityLevels; // 0xc9
	QualityScalableBool m_PlanarReflection; // 0xcd
	bool m_RenderInSkyEnvMap; // 0xd1
	bool m_WriteAlpha; // 0xd2
	unsigned char _0xd3[0xd];
}; // size = 0xe0

#endif // FBGEN_SkyCelestialSingleComponentData_H
