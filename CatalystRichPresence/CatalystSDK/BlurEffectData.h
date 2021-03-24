//
// Generated with FrostbiteGen by Chod
// File: SDK\BlurEffectData.h
// Created: Wed Mar 10 19:08:27 2021
//

#ifndef FBGEN_BlurEffectData_H
#define FBGEN_BlurEffectData_H

struct BlurEffectData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815E20;
	}
	float m_DispersionStrength; // 0x0
	float m_DispersionThreshhold; // 0x4
	float m_ExplosionStrength; // 0x8
	float m_BulletStrength; // 0xc
	float m_ExplosionFalloffSpeed; // 0x10
	float m_BulletFalloffSpeed; // 0x14
}; // size = 0x18

#endif // FBGEN_BlurEffectData_H
