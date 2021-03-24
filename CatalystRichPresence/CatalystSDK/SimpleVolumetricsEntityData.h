//
// Generated with FrostbiteGen by Chod
// File: SDK\SimpleVolumetricsEntityData.h
// Created: Wed Mar 10 19:01:24 2021
//

#ifndef FBGEN_SimpleVolumetricsEntityData_H
#define FBGEN_SimpleVolumetricsEntityData_H

#include "Vec3.h"
#include "SimpleVolumetricsDrawPass.h"
#include "SpatialEntityData.h"

class SimpleVolumetricsEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142847060;
	}
	Vec3 m_Emission; // 0x60
	float m_Exponent; // 0x70
	float m_FadeOutStartRadius; // 0x74
	float m_EmissionScale; // 0x78
	SimpleVolumetricsDrawPass m_DrawPass; // 0x7c
	bool m_Enabled; // 0x80
	unsigned char m_GroupID; // 0x81
	unsigned char _0x82[0xe];
}; // size = 0x90

#endif // FBGEN_SimpleVolumetricsEntityData_H
