//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementBaseEntityData.h
// Created: Wed Mar 10 19:07:26 2021
//

#ifndef FBGEN_CrowdPlacementBaseEntityData_H
#define FBGEN_CrowdPlacementBaseEntityData_H

#include "CrowdVariationSettings.h"
#include "SpatialEntityData.h"

class CrowdPlacementBaseEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428945D0;
	}
	CrowdVariationSettings* m_VariationSettings; // 0x60
	bool m_EnableAttractors; // 0x68
	bool m_SnapToTerrain; // 0x69
	bool m_UseHeadTracking; // 0x6a
	unsigned char _0x6b[0x5];
}; // size = 0x70

#endif // FBGEN_CrowdPlacementBaseEntityData_H
