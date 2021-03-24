//
// Generated with FrostbiteGen by Chod
// File: SDK\FilmicEffectsComponentData.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FilmicEffectsComponentData_H
#define FBGEN_FilmicEffectsComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class FilmicEffectsComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428381E0;
	}
	Vec3 m_DepthFlashAtmosColor; // 0x80
	Realm m_Realm; // 0x90
	float m_ChromaticAbberationScale; // 0x94
	float m_ChromaticAbberationAspectRatio; // 0x98
	float m_VignettingFalloff; // 0x9c
	float m_VignettingLuminancePercent; // 0xa0
	float m_LensDistortionGain; // 0xa4
	float m_LensDistortionCubicGain; // 0xa8
	float m_FrameFlashGain; // 0xac
	float m_DepthFlashHalfDistance; // 0xb0
	float m_DistanceBlurGain; // 0xb4
	float m_DistanceBlurHalfDistance; // 0xb8
	float m_EdgeBlurGain; // 0xbc
	float m_EdgeBlurDepthTargetScale; // 0xc0
	float m_EdgeBlurFadeNearDepth; // 0xc4
	float m_EdgeBlurFadeFarDepth; // 0xc8
	float m_EdgeBlurMatteDilateSize; // 0xcc
	float m_EdgeBlurMatteBlurKernelSize; // 0xd0
	float m_HeatRippleGain; // 0xd4
	float m_HeatRippleHorizontalSpeed; // 0xd8
	float m_HeatRippleVerticalSpeed; // 0xdc
	float m_HeatRippleNoiseScale; // 0xe0
	float m_HeatRippleNearDistance; // 0xe4
	float m_HeatRippleFarDistance; // 0xe8
	float m_HeatRippleNearGain; // 0xec
	float m_HeatRippleFarGain; // 0xf0
	unsigned char _0xf4[0x4];
	TextureAsset* m_HeatRippleTexture; // 0xf8
	bool m_Enable; // 0x100
	bool m_EnableChromaticAbberation; // 0x101
	bool m_EnableVignetting; // 0x102
	bool m_EnableLensDistortion; // 0x103
	bool m_EnableFrameFlash; // 0x104
	bool m_EnableDepthFlash; // 0x105
	bool m_EnableDistanceBlur; // 0x106
	bool m_EnableEdgeBlur; // 0x107
	bool m_EnableHeatRipple; // 0x108
	unsigned char _0x109[0x7];
}; // size = 0x110

#endif // FBGEN_FilmicEffectsComponentData_H
