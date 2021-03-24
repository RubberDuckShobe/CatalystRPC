//
// Generated with FrostbiteGen by Chod
// File: SDK\OutdoorLightComponentData.h
// Created: Wed Mar 10 19:05:24 2021
//

#ifndef FBGEN_OutdoorLightComponentData_H
#define FBGEN_OutdoorLightComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "ShadowFilteringType.h"
#include "ShaderShadowmapQuality.h"
#include "TextureAsset.h"
#include "Vec2.h"
#include "TextureAddress.h"
#include "VisualEnvironmentComponentData.h"

class OutdoorLightComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846EE0;
	}
	Vec3 m_SunColor; // 0x80
	Vec3 m_FinalSunLuminance; // 0x90
	Vec3 m_FinalSunIlluminance; // 0xa0
	Vec3 m_OuterSpaceSunLuminance; // 0xb0
	Vec3 m_OuterSpaceSunIlluminance1; // 0xc0
	Vec3 m_OuterSpaceSunIlluminance2; // 0xd0
	Vec3 m_SkyColor; // 0xe0
	Vec3 m_GroundColor; // 0xf0
	Realm m_Realm; // 0x100
	float m_SunRotationX; // 0x104
	float m_SunRotationY; // 0x108
	float m_ShadowSunRotationX; // 0x10c
	float m_ShadowSunRotationY; // 0x110
	float m_SunIntensity; // 0x114
	float m_SunAngularRadius; // 0x118
	float m_SunDiskIntensity; // 0x11c
	float m_SkyLightAngleFactor; // 0x120
	float m_SunSpecularScale; // 0x124
	float m_SkyEnvmapShadowScale; // 0x128
	float m_SunShadowHeightScale; // 0x12c
	ShadowFilteringType m_SunShadowFilterType; // 0x130
	ShaderShadowmapQuality m_SunShadowForwardQuality; // 0x134
	int m_SunPcssInitialSampleCount; // 0x138
	int m_SunPcssMaximumSampleCount; // 0x13c
	float m_SunPcssFilterErrorThresholdPct; // 0x140
	float m_SunPenumbraSize; // 0x144
	float m_SunPcssShadowFilterScale; // 0x148
	unsigned char _0x14c[0x4];
	TextureAsset* m_CloudShadowTexture; // 0x150
	Vec2 m_CloudShadowSpeed; // 0x158
	float m_CloudShadowSize; // 0x160
	float m_CloudShadowCoverage; // 0x164
	float m_CloudShadowExponent; // 0x168
	float m_CloudShadowStartFade; // 0x16c
	float m_CloudShadowsFadeDistance; // 0x170
	Vec2 m_CloudXZTranslation; // 0x174
	TextureAddress m_CloudShadowAddressingMode; // 0x17c
	float m_TranslucencyAmbient; // 0x180
	float m_TranslucencyScale; // 0x184
	float m_TranslucencyPower; // 0x188
	float m_TranslucencyDistortion; // 0x18c
	float m_ParticleSunShadowFactor; // 0x190
	float m_ParticleSunShadowSmoothing; // 0x194
	bool m_Enable; // 0x198
	bool m_ShadowSunRotationEnable; // 0x199
	bool m_SunPcssFilterAdaptive; // 0x19a
	bool m_CloudShadowEnable; // 0x19b
	bool m_CloudShadowIsTopDown; // 0x19c
	unsigned char _0x19d[0x3];
}; // size = 0x1a0

#endif // FBGEN_OutdoorLightComponentData_H
