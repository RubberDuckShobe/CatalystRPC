//
// Generated with FrostbiteGen by Chod
// File: SDK\GroundHeightEntityData.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GroundHeightEntityData_H
#define FBGEN_GroundHeightEntityData_H

#include "GroundHeightData.h"
#include "SpatialEntityData.h"

class GroundHeightEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842310;
	}
	GroundHeightData m_Data; // 0x60
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_GroundHeightEntityData_H
