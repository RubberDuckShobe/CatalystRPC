//
// Generated with FrostbiteGen by Chod
// File: SDK\SubSurfaceProfile.h
// Created: Wed Mar 10 19:00:43 2021
//

#ifndef FBGEN_SubSurfaceProfile_H
#define FBGEN_SubSurfaceProfile_H

#include "SubSurfaceProfilePreset.h"
struct SubSurfaceProfile
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142837C20;
	}
	SubSurfaceProfilePreset m_Preset; // 0x0
	float m_ScatteringScale; // 0x4
	float m_ScatteringSpikeAmount; // 0x8
	float m_RadiusR; // 0xc
	float m_RadiusG; // 0x10
	float m_RadiusB; // 0x14
	float m_TranslucencyScale; // 0x18
	float m_TranslucencyBaseColorAmount; // 0x1c
	float m_TranslucencyMultiplier; // 0x20
	float m_TranslucencyShadowBias; // 0x24
	bool m_ScatteringEnable; // 0x28
	bool m_TranslucencyEnable; // 0x29
	bool m_AutomaticThicknessEnable; // 0x2a
	unsigned char _0x2b[0x1];
}; // size = 0x2c

#endif // FBGEN_SubSurfaceProfile_H
