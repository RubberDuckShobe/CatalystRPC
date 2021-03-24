//
// Generated with FrostbiteGen by Chod
// File: SDK\FireEffectData.h
// Created: Wed Mar 10 19:06:47 2021
//

#ifndef FBGEN_FireEffectData_H
#define FBGEN_FireEffectData_H

#include "Vec3.h"
#include "EffectBlueprint.h"
struct FireEffectData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289D3A0;
	}
	Vec3 m_Offset; // 0x0
	Vec3 m_Rotation; // 0x10
	Vec3 m_ZoomOffset; // 0x20
	Vec3 m_ZoomRotation; // 0x30
	EffectBlueprint* m_Effect; // 0x40
	bool m_UseZoomOffset; // 0x48
	bool m_UseZoomRotation; // 0x49
	bool m_DisableDuringZoom; // 0x4a
	bool m_UpdateTransform; // 0x4b
	bool m_StopLoopingEffects; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_FireEffectData_H
