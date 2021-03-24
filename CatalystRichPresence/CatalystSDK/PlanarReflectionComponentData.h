//
// Generated with FrostbiteGen by Chod
// File: SDK\PlanarReflectionComponentData.h
// Created: Wed Mar 10 19:03:07 2021
//

#ifndef FBGEN_PlanarReflectionComponentData_H
#define FBGEN_PlanarReflectionComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "BlurFilter.h"
#include "VisualEnvironmentComponentData.h"

class PlanarReflectionComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846DC0;
	}
	Vec3 m_KeyColorReflection; // 0x80
	Vec3 m_SkyColorReflection; // 0x90
	Vec3 m_GroundColorReflection; // 0xa0
	Realm m_Realm; // 0xb0
	float m_GroundHeight; // 0xb4
	float m_ViewDistance; // 0xb8
	BlurFilter m_VerticalBlurFilter; // 0xbc
	float m_VerticalDeviation; // 0xc0
	BlurFilter m_HorizontalBlurFilter; // 0xc4
	float m_HorizontalDeviation; // 0xc8
	float m_ClippingOffset; // 0xcc
	bool m_Enable; // 0xd0
	bool m_TerrainReflectionsEnable; // 0xd1
	bool m_SkyRenderEnable; // 0xd2
	bool m_OverideOutdoorLightColors; // 0xd3
	unsigned char _0xd4[0xc];
}; // size = 0xe0

#endif // FBGEN_PlanarReflectionComponentData_H
