//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrAnalyticLightEntityData.h
// Created: Wed Mar 10 19:03:15 2021
//

#ifndef FBGEN_PbrAnalyticLightEntityData_H
#define FBGEN_PbrAnalyticLightEntityData_H

#include "Vec3.h"
#include "LightColorMode.h"
#include "LightUnitType.h"
#include "QualityScalableEnabled.h"
#include "ShadowmapRefreshPolicy.h"
#include "LocalLightEntityData.h"

class PbrAnalyticLightEntityData :
	public LocalLightEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841FB0;
	}
	Vec3 m_Color; // 0x70
	Vec3 m_ParticleColorScale; // 0x80
	Vec3 m_RadiosityColorScale; // 0x90
	LightColorMode m_LightColorMode; // 0xa0
	int m_Temperature; // 0xa4
	float m_Intensity; // 0xa8
	float m_AttenuationRadius; // 0xac
	float m_AttenuationOffset; // 0xb0
	LightUnitType m_LightUnit; // 0xb4
	QualityScalableEnabled m_CastShadows; // 0xb8
	QualityScalableEnabled m_CastVolumetricShadows; // 0xbc
	float m_ShadowRadius; // 0xc0
	float m_ShadowCullDistance; // 0xc4
	float m_ShadowFadeDistance; // 0xc8
	float m_ShadowDimmer; // 0xcc
	float m_Dimmer; // 0xd0
	int m_ShadowUpdateSignal; // 0xd4
	float m_ShadowUpdatePriority; // 0xd8
	ShadowmapRefreshPolicy m_ShadowmapRefresh; // 0xdc
	bool m_EmissiveShapeEnable; // 0xe0
	bool m_AffectDiffuse; // 0xe1
	bool m_AffectSpecular; // 0xe2
	bool m_CastShadowsEnable; // 0xe3
	bool m_CastVolumetricShadowsEnable; // 0xe4
	bool m_AffectRadiosity; // 0xe5
	unsigned char m_GroupID; // 0xe6
	unsigned char _0xe7[0x9];
}; // size = 0xf0

#endif // FBGEN_PbrAnalyticLightEntityData_H
