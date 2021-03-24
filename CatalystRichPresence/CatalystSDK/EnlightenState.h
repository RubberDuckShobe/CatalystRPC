//
// Generated with FrostbiteGen by Chod
// File: SDK\EnlightenState.h
// Created: Wed Mar 10 19:06:58 2021
//

#ifndef FBGEN_EnlightenState_H
#define FBGEN_EnlightenState_H

#include "Vec3.h"
#include "DataContainer.h"

class EnlightenState :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842910;
	}
	float m_BounceScale; // 0x10
	float m_SunScale; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_SkyBoxSkyColor; // 0x20
	Vec3 m_SkyBoxGroundColor; // 0x30
	Vec3 m_SkyBoxSunLightColor; // 0x40
	Vec3 m_SkyBoxBackLightColor; // 0x50
	float m_OutputScale; // 0x60
	float m_SkyBoxSunLightColorSize; // 0x64
	float m_SkyBoxBackLightColorSize; // 0x68
	float m_SkyBoxBackLightRotationX; // 0x6c
	float m_SkyBoxBackLightRotationY; // 0x70
	bool m_SkyBoxEnable; // 0x74
	unsigned char _0x75[0xb];
}; // size = 0x80

#endif // FBGEN_EnlightenState_H
