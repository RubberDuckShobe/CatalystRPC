//
// Generated with FrostbiteGen by Chod
// File: SDK\DamageEffectComponentData.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DamageEffectComponentData_H
#define FBGEN_DamageEffectComponentData_H

#include "Vec4.h"
#include "Realm.h"
#include "SurfaceShaderBaseAsset.h"
#include "VisualEnvironmentComponentData.h"

class DamageEffectComponentData :
	public VisualEnvironmentComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428469A0;
	}
	Vec4 m_TopDamage; // 0x80
	Vec4 m_LeftDamage; // 0x90
	Vec4 m_BottomDamage; // 0xa0
	Vec4 m_RightDamage; // 0xb0
	Realm m_Realm; // 0xc0
	unsigned char _0xc4[0x4];
	SurfaceShaderBaseAsset* m_Shader; // 0xc8
	float m_FrameWidth; // 0xd0
	float m_OuterFrameOpacity; // 0xd4
	float m_InnerFrameOpacity; // 0xd8
	float m_FallofTime; // 0xdc
	float m_MinDamagePercentageThreshold; // 0xe0
	float m_MaxOpacityDamagePercentage; // 0xe4
	float m_StartCriticalEffectHealthThreshold; // 0xe8
	float m_EndCriticalEffectHealthThreshold; // 0xec
	bool m_DebugDamage; // 0xf0
	unsigned char _0xf1[0xf];
}; // size = 0x100

#endif // FBGEN_DamageEffectComponentData_H
