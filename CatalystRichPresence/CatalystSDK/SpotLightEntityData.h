//
// Generated with FrostbiteGen by Chod
// File: SDK\SpotLightEntityData.h
// Created: Wed Mar 10 19:01:00 2021
//

#ifndef FBGEN_SpotLightEntityData_H
#define FBGEN_SpotLightEntityData_H

#include "SpotLightShape.h"
#include "TextureAsset.h"
#include "QualityScalableEnabled.h"
#include "QualityLevel.h"
#include "OriginalLocalLightEntityData.h"

class SpotLightEntityData :
	public OriginalLocalLightEntityData // size = 0xc0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428420D0;
	}
	SpotLightShape m_Shape; // 0xc0
	float m_ConeInnerAngle; // 0xc4
	float m_ConeOuterAngle; // 0xc8
	float m_FrustumFov; // 0xcc
	float m_FrustumAspect; // 0xd0
	float m_OrthoWidth; // 0xd4
	float m_OrthoHeight; // 0xd8
	float m_NearPlane; // 0xdc
	TextureAsset* m_Texture; // 0xe0
	QualityScalableEnabled m_CastShadows; // 0xe8
	QualityScalableEnabled m_CastVolumetricShadows; // 0xec
	float m_ShadowRadius; // 0xf0
	float m_ShadowCullDistance; // 0xf4
	QualityScalableEnabled m_FrustumAsCone; // 0xf8
	float m_FrustumAsConeIntensityScale; // 0xfc
	QualityLevel m_CastShadowsMinLevel; // 0x100
	bool m_FrustumAsConeAngle; // 0x104
	bool m_CastShadowsEnable; // 0x105
	bool m_CastVolumetricShadowsEnable; // 0x106
	unsigned char _0x107[0x9];
}; // size = 0x110

#endif // FBGEN_SpotLightEntityData_H
