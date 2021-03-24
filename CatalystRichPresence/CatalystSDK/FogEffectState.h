//
// Generated with FrostbiteGen by Chod
// File: SDK\FogEffectState.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FogEffectState_H
#define FBGEN_FogEffectState_H

#include "Vec4.h"
#include "Vec3.h"
#include "DataContainer.h"

class FogEffectState :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846460;
	}
	float m_Start; // 0x10
	float m_End; // 0x14
	unsigned char _0x18[0x8];
	Vec4 m_Curve; // 0x20
	Vec3 m_FogColor; // 0x30
	Vec4 m_FogColorCurve; // 0x40
	Vec3 m_ForwardLightScatteringColor; // 0x50
	float m_FogColorStart; // 0x60
	float m_FogColorEnd; // 0x64
	float m_TransparencyFadeStart; // 0x68
	float m_TransparencyFadeEnd; // 0x6c
	float m_TransparencyFadeClamp; // 0x70
	float m_ForwardLightScatteringPhaseG; // 0x74
	float m_ForwardLightScatteringStrength; // 0x78
	float m_ForwardLightScatteringPresence; // 0x7c
	float m_ForwardLightScatteringMaxBlurLength; // 0x80
	float m_ForwardLightScatteringExtinction; // 0x84
	float m_ForwardLightScatteringSmoothness; // 0x88
	float m_HeightFogFollowCamera; // 0x8c
	float m_HeightFogAltitude; // 0x90
	float m_HeightFogDepth; // 0x94
	float m_HeightFogVisibilityRange; // 0x98
	bool m_Enable; // 0x9c
	bool m_ForwardLightScatteringEnabled; // 0x9d
	bool m_HeightFogEnable; // 0x9e
	unsigned char _0x9f[0x1];
}; // size = 0xa0

#endif // FBGEN_FogEffectState_H
