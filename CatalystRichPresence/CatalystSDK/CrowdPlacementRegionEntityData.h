//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementRegionEntityData.h
// Created: Wed Mar 10 19:07:25 2021
//

#ifndef FBGEN_CrowdPlacementRegionEntityData_H
#define FBGEN_CrowdPlacementRegionEntityData_H

#include "CrowdPlacementRegionSettings.h"
#include "Array.h"
#include "CrowdPlacementBaseEntityData.h"

class CrowdPlacementRegionEntityData :
	public CrowdPlacementBaseEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894690;
	}
	CrowdPlacementRegionSettings* m_Settings; // 0x70
	Array<CrowdPlacementRegionGrid> m_PlacementGrids; // 0x78
	int m_Weight; // 0x80
	float m_DefaultRotation; // 0x84
	int m_RotationJitter; // 0x88
	unsigned char _0x8c[0x4];
	const char* m_ObstacleListAssetName; // 0x90
	bool m_isWeightPerShape; // 0x98
	unsigned char _0x99[0x7];
}; // size = 0xa0

#endif // FBGEN_CrowdPlacementRegionEntityData_H
