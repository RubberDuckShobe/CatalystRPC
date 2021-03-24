//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrReflectionVolumeEntityData.h
// Created: Wed Mar 10 19:03:15 2021
//

#ifndef FBGEN_PbrReflectionVolumeEntityData_H
#define FBGEN_PbrReflectionVolumeEntityData_H

#include "LocalIBLMode.h"
#include "TextureAsset.h"
#include "SpatialEntityData.h"

class PbrReflectionVolumeEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841DD0;
	}
	LocalIBLMode m_Mode; // 0x60
	float m_CaptureDistance; // 0x64
	float m_CaptureFadeDistance; // 0x68
	float m_InfluenceExpandDistance; // 0x6c
	float m_InfluenceFadeDistance; // 0x70
	unsigned char _0x74[0x4];
	TextureAsset* m_BakedTexture; // 0x78
	bool m_Enabled; // 0x80
	bool m_UpdateWhenMoving; // 0x81
	bool m_CaptureSky; // 0x82
	bool m_CaptureSkyMask; // 0x83
	bool m_UseSkyVisibilityAsAO; // 0x84
	bool m_UseSkyVisibilityAsMask; // 0x85
	bool m_DoNotUpdateBakedTexture; // 0x86
	unsigned char _0x87[0x9];
}; // size = 0x90

#endif // FBGEN_PbrReflectionVolumeEntityData_H
