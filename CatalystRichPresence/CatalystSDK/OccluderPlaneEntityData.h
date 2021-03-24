//
// Generated with FrostbiteGen by Chod
// File: SDK\OccluderPlaneEntityData.h
// Created: Wed Mar 10 19:05:29 2021
//

#ifndef FBGEN_OccluderPlaneEntityData_H
#define FBGEN_OccluderPlaneEntityData_H

#include "SpatialEntityData.h"

class OccluderPlaneEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842730;
	}
	float m_CoverageValue; // 0x60
	bool m_OccluderHighPriority; // 0x64
	bool m_OccluderIsConservative; // 0x65
	bool m_DoubledSided; // 0x66
	bool m_Visible; // 0x67
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_OccluderPlaneEntityData_H
