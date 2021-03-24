//
// Generated with FrostbiteGen by Chod
// File: SDK\LocalPlanarReflectionEntityData.h
// Created: Wed Mar 10 19:06:11 2021
//

#ifndef FBGEN_LocalPlanarReflectionEntityData_H
#define FBGEN_LocalPlanarReflectionEntityData_H

#include "Vec3.h"
#include "LPROverrideKeyLightLuminance.h"
#include "SpatialEntityData.h"

class LocalPlanarReflectionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841BF0;
	}
	Vec3 m_KeyLightLuminance; // 0x60
	Vec3 m_KeyLightDirection; // 0x70
	float m_FarPlane; // 0x80
	float m_DistanceTolerance; // 0x84
	float m_DistanceFalloff; // 0x88
	float m_NormalTolerance; // 0x8c
	float m_NormalFalloff; // 0x90
	LPROverrideKeyLightLuminance m_OverrideKeyLightLuminance; // 0x94
	float m_LuminanceScale; // 0x98
	float m_Opacity; // 0x9c
	float m_RoughnessTolerance; // 0xa0
	float m_RoughnessFalloff; // 0xa4
	float m_PlaneFadeOutDistance; // 0xa8
	float m_CenterFadeOutDistance; // 0xac
	bool m_Enable; // 0xb0
	bool m_TerrainReflectionsEnable; // 0xb1
	bool m_SkyReflectionEnable; // 0xb2
	bool m_OverrideKeyLightDirection; // 0xb3
	unsigned char _0xb4[0xc];
}; // size = 0xc0

#endif // FBGEN_LocalPlanarReflectionEntityData_H
