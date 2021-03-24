//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdAttractorRepulsorBaseEntityData.h
// Created: Wed Mar 10 19:07:27 2021
//

#ifndef FBGEN_CrowdAttractorRepulsorBaseEntityData_H
#define FBGEN_CrowdAttractorRepulsorBaseEntityData_H

#include "BehaviorType.h"
#include "SpatialEntityData.h"

class CrowdAttractorRepulsorBaseEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428948D0;
	}
	float m_Radius; // 0x60
	float m_InfluenceWeight; // 0x64
	BehaviorType m_Behavior; // 0x68
	unsigned char _0x6c[0x4];
}; // size = 0x70

#endif // FBGEN_CrowdAttractorRepulsorBaseEntityData_H
