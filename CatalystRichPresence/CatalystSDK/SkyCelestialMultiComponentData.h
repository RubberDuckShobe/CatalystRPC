//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyCelestialMultiComponentData.h
// Created: Wed Mar 10 19:01:23 2021
//

#ifndef FBGEN_SkyCelestialMultiComponentData_H
#define FBGEN_SkyCelestialMultiComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "QualityScalableInt.h"
#include "TextureAsset.h"
#include "Vec2.h"
#include "QualityScalableBool.h"
#include "VisualEnvironmentComponentData.h"

class SkyCelestialMultiComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428466A0;
	}
	Vec3 m_Tint; // 0x80
	Realm m_Realm; // 0x90
	unsigned int m_DrawOrder; // 0x94
	QualityScalableInt m_QuadCount; // 0x98
	TextureAsset* m_Texture; // 0xa8
	Vec2 m_UVStart; // 0xb0
	Vec2 m_UVEnd; // 0xb8
	Vec2 m_UVGrid; // 0xc0
	float m_SkyEnvmapTintScale; // 0xc8
	int m_RandomSeed; // 0xcc
	float m_MinScale; // 0xd0
	float m_MaxScale; // 0xd4
	float m_ScaleMultiplier; // 0xd8
	float m_ZenithStop; // 0xdc
	float m_NadirStop; // 0xe0
	bool m_Enable; // 0xe4
	QualityScalableBool m_EnabledOnQualityLevels; // 0xe5
	QualityScalableBool m_PlanarReflection; // 0xe9
	bool m_RenderInSkyEnvMap; // 0xed
	bool m_WriteAlpha; // 0xee
	unsigned char _0xef[0x1];
}; // size = 0xf0

#endif // FBGEN_SkyCelestialMultiComponentData_H
