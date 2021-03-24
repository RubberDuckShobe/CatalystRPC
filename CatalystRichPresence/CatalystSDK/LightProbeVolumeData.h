//
// Generated with FrostbiteGen by Chod
// File: SDK\LightProbeVolumeData.h
// Created: Wed Mar 10 19:06:17 2021
//

#ifndef FBGEN_LightProbeVolumeData_H
#define FBGEN_LightProbeVolumeData_H

#include "SpatialEntityData.h"

class LightProbeVolumeData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842070;
	}
	unsigned int m_Xres; // 0x60
	unsigned int m_Yres; // 0x64
	unsigned int m_Zres; // 0x68
	float m_BlendDistance; // 0x6c
	int m_Priority; // 0x70
	unsigned char _0x74[0xc];
}; // size = 0x80

#endif // FBGEN_LightProbeVolumeData_H
