//
// Generated with FrostbiteGen by Chod
// File: SDK\FogComponentData.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FogComponentData_H
#define FBGEN_FogComponentData_H

#include "Vec4.h"
#include "Vec3.h"
#include "Realm.h"
#include "VisualEnvironmentComponentData.h"

class FogComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846E80;
	}
	Vec4 m_Curve; // 0x80
	Vec3 m_FogColor; // 0x90
	Vec4 m_FogColorCurve; // 0xa0
	Vec4 m_TransparencyFadeCurve; // 0xb0
	Vec3 m_ForwardLightScatteringColor; // 0xc0
	Realm m_Realm; // 0xd0
	float m_FogDistanceMultiplier; // 0xd4
	float m_Start; // 0xd8
	float m_End; // 0xdc
	float m_FogColorStart; // 0xe0
	float m_FogColorEnd; // 0xe4
	float m_TransparencyFadeStart; // 0xe8
	float m_TransparencyFadeEnd; // 0xec
	float m_TransparencyFadeClamp; // 0xf0
	float m_ForwardLightScatteringPhaseG; // 0xf4
	float m_ForwardLightScatteringStrength; // 0xf8
	float m_ForwardLightScatteringPresence; // 0xfc
	float m_ForwardLightScatteringMaxBlurLength; // 0x100
	float m_ForwardLightScatteringExtinction; // 0x104
	float m_ForwardLightScatteringSmoothness; // 0x108
	float m_HeightFogFollowCamera; // 0x10c
	float m_HeightFogAltitude; // 0x110
	float m_HeightFogDepth; // 0x114
	float m_HeightFogVisibilityRange; // 0x118
	bool m_Enable; // 0x11c
	bool m_FogGradientEnable; // 0x11d
	bool m_FogColorEnable; // 0x11e
	bool m_ForwardLightScatteringEnabled; // 0x11f
	bool m_HeightFogEnable; // 0x120
	unsigned char _0x121[0xf];
}; // size = 0x130

#endif // FBGEN_FogComponentData_H
