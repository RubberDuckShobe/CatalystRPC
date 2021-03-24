//
// Generated with FrostbiteGen by Chod
// File: SDK\OriginalLocalLightEntityData.h
// Created: Wed Mar 10 19:05:25 2021
//

#ifndef FBGEN_OriginalLocalLightEntityData_H
#define FBGEN_OriginalLocalLightEntityData_H

#include "Vec3.h"
#include "EnlightenColorMode.h"
#include "LocalLightEntityData.h"

class OriginalLocalLightEntityData :
	public LocalLightEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842190;
	}
	Vec3 m_Color; // 0x70
	Vec3 m_EnlightenColorScale; // 0x80
	Vec3 m_ParticleColorScale; // 0x90
	float m_Radius; // 0xa0
	float m_Intensity; // 0xa4
	float m_AttenuationOffset; // 0xa8
	EnlightenColorMode m_EnlightenColorMode; // 0xac
	bool m_DirectLightEnable; // 0xb0
	bool m_SpecularEnable; // 0xb1
	bool m_EnlightenEnable; // 0xb2
	unsigned char _0xb3[0xd];
}; // size = 0xc0

#endif // FBGEN_OriginalLocalLightEntityData_H
