//
// Generated with FrostbiteGen by Chod
// File: SDK\PbrBoxReflectionVolumeEntityData.h
// Created: Wed Mar 10 19:03:15 2021
//

#ifndef FBGEN_PbrBoxReflectionVolumeEntityData_H
#define FBGEN_PbrBoxReflectionVolumeEntityData_H

#include "Vec3.h"
#include "PbrGenericBoxReflectionVolumeEntityData.h"

class PbrBoxReflectionVolumeEntityData :
	public PbrGenericBoxReflectionVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841CB0;
	}
	Vec3 m_InfluenceFadeNormal; // 0xa0
	float m_SideFadePosX; // 0xb0
	float m_SideFadeNegX; // 0xb4
	float m_SideFadePosY; // 0xb8
	float m_SideFadeNegY; // 0xbc
	float m_SideFadePosZ; // 0xc0
	float m_SideFadeNegZ; // 0xc4
	unsigned char _0xc8[0x8];
}; // size = 0xd0

#endif // FBGEN_PbrBoxReflectionVolumeEntityData_H
