//
// Generated with FrostbiteGen by Chod
// File: SDK\SkyComponentData.h
// Created: Wed Mar 10 19:01:21 2021
//

#ifndef FBGEN_SkyComponentData_H
#define FBGEN_SkyComponentData_H

#include "Vec4.h"
#include "Vec3.h"
#include "Realm.h"
#include "SkyType.h"
#include "AlphaOutputMode.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class SkyComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846E20;
	}
	Vec3 m_CloudLayerSunColor; // 0x80
	Vec3 m_CloudLayer1Color; // 0x90
	Vec3 m_CloudLayer2Color; // 0xa0
	Vec3 m_RayleighScatteringCoefficient; // 0xb0
	Vec3 m_Light1Color; // 0xc0
	Vec3 m_Light2Color; // 0xd0
	Vec3 m_nightSkyColor; // 0xe0
	Vec3 m_nightSkyHorizonColor; // 0xf0
	Vec3 m_RayleighPolarization; // 0x100
	Vec3 m_MiePolarization; // 0x110
	Vec3 m_OutdoorLightScale; // 0x120
	Vec4 m_ForwardScatteringDepthVisibility; // 0x130
	Vec3 m_ForwardScatteringOutdoorLightTint; // 0x140
	Vec3 m_HeightFogColorAdd; // 0x150
	Vec3 m_HeightFogColorMult; // 0x160
	Realm m_Realm; // 0x170
	SkyType m_SkyType; // 0x174
	float m_LuminanceScale; // 0x178
	unsigned char _0x17c[0x4];
	TextureAsset* m_SkyGradientTexture; // 0x180
	AlphaOutputMode m_AlphaOutput; // 0x188
	float m_HdriRotation; // 0x18c
	TextureAsset* m_HdriTexture; // 0x190
	float m_SunSize; // 0x198
	float m_SunScale; // 0x19c
	float m_PanoramicUVMinX; // 0x1a0
	float m_PanoramicUVMaxX; // 0x1a4
	float m_PanoramicUVMinY; // 0x1a8
	float m_PanoramicUVMaxY; // 0x1ac
	float m_PanoramicTileFactor; // 0x1b0
	float m_PanoramicRotation; // 0x1b4
	TextureAsset* m_PanoramicTexture; // 0x1b8
	TextureAsset* m_PanoramicAlphaTexture; // 0x1c0
	TextureAsset* m_CloudLayerMaskTexture; // 0x1c8
	float m_CloudWindDirection; // 0x1d0
	float m_CloudLayer1Altitude; // 0x1d4
	float m_CloudLayer1TileFactor; // 0x1d8
	float m_CloudLayer1Rotation; // 0x1dc
	float m_CloudLayer1Speed; // 0x1e0
	float m_CloudLayer1SunLightIntensity; // 0x1e4
	float m_CloudLayer1SunLightPower; // 0x1e8
	float m_CloudLayer1AmbientLightIntensity; // 0x1ec
	float m_CloudLayer1AlphaMul; // 0x1f0
	unsigned char _0x1f4[0x4];
	TextureAsset* m_CloudLayer1Texture; // 0x1f8
	float m_CloudLayer1Absorption; // 0x200
	float m_CloudLayer1Scattering; // 0x204
	float m_CloudLayer1Phase; // 0x208
	float m_CloudLayer1Thickness; // 0x20c
	float m_CloudLayer2Altitude; // 0x210
	float m_CloudLayer2TileFactor; // 0x214
	float m_CloudLayer2Rotation; // 0x218
	float m_CloudLayer2Speed; // 0x21c
	float m_CloudLayer2SunLightIntensity; // 0x220
	float m_CloudLayer2SunLightPower; // 0x224
	float m_CloudLayer2AmbientLightIntensity; // 0x228
	float m_CloudLayer2AlphaMul; // 0x22c
	TextureAsset* m_CloudLayer2Texture; // 0x230
	float m_CloudLayer2Absorption; // 0x238
	float m_CloudLayer2Scattering; // 0x23c
	float m_CloudLayer2Phase; // 0x240
	float m_CloudLayer2Thickness; // 0x244
	TextureAsset* m_StaticEnvmapTexture; // 0x248
	float m_StaticEnvmapScale; // 0x250
	float m_SkyEnvmap8BitTexScale; // 0x254
	TextureAsset* m_CustomEnvmapTexture; // 0x258
	float m_CustomEnvmapScale; // 0x260
	float m_CustomEnvmapAmbient; // 0x264
	float m_SkyVisibilityExponent; // 0x268
	float m_EarthRadius; // 0x26c
	float m_AtmosphereRadius; // 0x270
	float m_MieScatteringCoefficient; // 0x274
	float m_MieG; // 0x278
	float m_MieExtinctionCoefficientRelation; // 0x27c
	float m_ScaleHeightMie; // 0x280
	float m_RayleighScatteringCoefficientScale; // 0x284
	float m_RayleighExtinctionCoefficientRelation; // 0x288
	float m_ScaleHeightRayleigh; // 0x28c
	float m_OzonePercentage; // 0x290
	float m_AerialPerspectiveScale; // 0x294
	float m_AerialPerspectiveIntensity; // 0x298
	float m_AerialPerspectiveDithering; // 0x29c
	float m_Light1Intensity; // 0x2a0
	float m_Light1RotX; // 0x2a4
	float m_Light1RotY; // 0x2a8
	float m_Light2Intensity; // 0x2ac
	float m_Light2RotX; // 0x2b0
	float m_Light2RotY; // 0x2b4
	float m_nightSkyHorizonScale; // 0x2b8
	float m_FogStartDistance; // 0x2bc
	float m_ForwardScatteringStartDepth; // 0x2c0
	float m_ForwardScatteringEndDepth; // 0x2c4
	float m_ForwardScatteringTakesColorFromOutdoorLight; // 0x2c8
	float m_MinHeightFogTransmittance; // 0x2cc
	float m_FlowPeriod; // 0x2d0
	float m_FlowDistance; // 0x2d4
	float m_FlowDirection; // 0x2d8
	float m_FlowHeightMaskScale; // 0x2dc
	float m_FlowHeightMaskBias; // 0x2e0
	unsigned char _0x2e4[0x4];
	TextureAsset* m_FlowMaskTexture; // 0x2e8
	bool m_Enable; // 0x2f0
	bool m_UseSkyVisibilityAsAO; // 0x2f1
	bool m_SkyGradientFollowsPanoramicUVs; // 0x2f2
	bool m_UseOzone; // 0x2f3
	bool m_UseAerialPerspective; // 0x2f4
	bool m_Light1FollowOutdoorLight; // 0x2f5
	bool m_Light1TakesColorFromOutdoorLight; // 0x2f6
	bool m_UseLightSource2; // 0x2f7
	bool m_UseNoise; // 0x2f8
	bool m_DrawSunDisc; // 0x2f9
	unsigned char _0x2fa[0x6];
}; // size = 0x300

#endif // FBGEN_SkyComponentData_H
