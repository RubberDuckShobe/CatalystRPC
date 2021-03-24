//
// Generated with FrostbiteGen by Chod
// File: SDK\LightEffectEntityData.h
// Created: Wed Mar 10 19:06:17 2021
//

#ifndef FBGEN_LightEffectEntityData_H
#define FBGEN_LightEffectEntityData_H

#include "Vec4.h"
#include "LocalLightEntityData.h"
#include "QualityScalableFloat.h"
#include "ChildEffectEntityData.h"

class LightEffectEntityData :
	public ChildEffectEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7880;
	}
	Vec4 m_IntensityCurve; // 0xa0
	LocalLightEntityData* m_Light; // 0xb0
	float m_Lifetime; // 0xb8
	QualityScalableFloat m_SpawnProbability; // 0xbc
	float m_RandomIntensityMin; // 0xcc
	float m_RandomIntensityMax; // 0xd0
	float m_IntensityMin; // 0xd4
	float m_IntensityMax; // 0xd8
	bool m_Looping; // 0xdc
	bool m_LocalPlayerOnly; // 0xdd
	unsigned char _0xde[0x2];
}; // size = 0xe0

#endif // FBGEN_LightEffectEntityData_H
