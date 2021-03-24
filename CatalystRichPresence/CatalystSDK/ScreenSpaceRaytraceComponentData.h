//
// Generated with FrostbiteGen by Chod
// File: SDK\ScreenSpaceRaytraceComponentData.h
// Created: Wed Mar 10 19:02:30 2021
//

#ifndef FBGEN_ScreenSpaceRaytraceComponentData_H
#define FBGEN_ScreenSpaceRaytraceComponentData_H

#include "Realm.h"
#include "TextureAsset.h"
#include "VisualEnvironmentComponentData.h"

class ScreenSpaceRaytraceComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846880;
	}
	Realm m_Realm; // 0x80
	float m_CameraFadeStart; // 0x84
	float m_CameraFadeLength; // 0x88
	float m_DistanceFadeStart; // 0x8c
	float m_DistanceFadeLength; // 0x90
	float m_ScreenFadeStart; // 0x94
	float m_ScreenFadeLength; // 0x98
	float m_BorderFadeStart; // 0x9c
	float m_BorderFadeLength; // 0xa0
	float m_MirrorFadeStart; // 0xa4
	float m_MirrorFadeLength; // 0xa8
	float m_ThicknessFadeStart; // 0xac
	float m_ThicknessFadeLength; // 0xb0
	float m_RoughnessFadeStart; // 0xb4
	float m_RoughnessFadeLength; // 0xb8
	unsigned char _0xbc[0x4];
	TextureAsset* m_NormalFadeTexture; // 0xc0
	unsigned int m_MinSamples; // 0xc8
	unsigned int m_MaxSamples; // 0xcc
	unsigned int m_TemporalSamples; // 0xd0
	unsigned int m_TemporalPeriod; // 0xd4
	float m_MinRoughness; // 0xd8
	float m_MaxRoughness; // 0xdc
	unsigned int m_ResolveSamples; // 0xe0
	float m_NoiseThreshold; // 0xe4
	float m_ClampThreshold; // 0xe8
	float m_ImportanceSamplingBias; // 0xec
	float m_FilterBias; // 0xf0
	float m_FilterAngularBias; // 0xf4
	float m_TemporalFilterResponsiveness; // 0xf8
	bool m_RaytraceEnable; // 0xfc
	unsigned char _0xfd[0x3];
}; // size = 0x100

#endif // FBGEN_ScreenSpaceRaytraceComponentData_H
