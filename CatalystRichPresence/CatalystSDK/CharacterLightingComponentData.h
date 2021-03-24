//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterLightingComponentData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterLightingComponentData_H
#define FBGEN_CharacterLightingComponentData_H

#include "Vec3.h"
#include "Realm.h"
#include "CharacterLightingMode.h"
#include "VisualEnvironmentComponentData.h"

class CharacterLightingComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142846940;
	}
	Vec3 m_TopLight; // 0x80
	Vec3 m_BottomLight; // 0x90
	Realm m_Realm; // 0xa0
	float m_CameraUpRotation; // 0xa4
	CharacterLightingMode m_CharacterLightingMode; // 0xa8
	float m_BlendFactor; // 0xac
	float m_TopLightDirX; // 0xb0
	float m_TopLightDirY; // 0xb4
	float m_StartFadeDistance; // 0xb8
	float m_EndFadeDistance; // 0xbc
	bool m_CharacterLightEnable; // 0xc0
	bool m_FirstPersonEnable; // 0xc1
	bool m_LockToCameraDirection; // 0xc2
	unsigned char _0xc3[0xd];
}; // size = 0xd0

#endif // FBGEN_CharacterLightingComponentData_H
