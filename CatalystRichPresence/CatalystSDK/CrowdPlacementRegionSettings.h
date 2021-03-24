//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementRegionSettings.h
// Created: Wed Mar 10 19:07:24 2021
//

#ifndef FBGEN_CrowdPlacementRegionSettings_H
#define FBGEN_CrowdPlacementRegionSettings_H

#include "Asset.h"

class CrowdPlacementRegionSettings :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894630;
	}
	float m_CellSize; // 0x18
	int m_MaximumNumberOfAgents; // 0x1c
	float m_MinimumDistance; // 0x20
	unsigned int m_CellListLevelsCount; // 0x24
	int m_NumCrowdGroups; // 0x28
	float m_MaxNumAgentsSpawnPercentage; // 0x2c
	float m_LayerSizeMultiplier; // 0x30
	int m_NumLayers; // 0x34
	float m_MaxDistanceMultiplier; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_CrowdPlacementRegionSettings_H
