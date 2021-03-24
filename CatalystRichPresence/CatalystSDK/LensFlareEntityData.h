//
// Generated with FrostbiteGen by Chod
// File: SDK\LensFlareEntityData.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LensFlareEntityData_H
#define FBGEN_LensFlareEntityData_H

#include "Array.h"
#include "SpatialEntityData.h"

class LensFlareEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428422B0;
	}
	float m_Dimmer; // 0x60
	float m_OccluderSize; // 0x64
	float m_DepthBias; // 0x68
	unsigned char _0x6c[0x4];
	Array<LensFlareElement> m_Elements; // 0x70
	bool m_Visible; // 0x78
	bool m_DebugDrawOccluder; // 0x79
	bool m_HalfRes; // 0x7a
	unsigned char _0x7b[0x5];
}; // size = 0x80

#endif // FBGEN_LensFlareEntityData_H
