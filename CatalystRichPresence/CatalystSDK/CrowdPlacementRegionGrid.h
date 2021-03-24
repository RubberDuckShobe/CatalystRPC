//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementRegionGrid.h
// Created: Wed Mar 10 19:07:24 2021
//

#ifndef FBGEN_CrowdPlacementRegionGrid_H
#define FBGEN_CrowdPlacementRegionGrid_H

#include "Array.h"
struct CrowdPlacementRegionGrid
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894410;
	}
	unsigned int m_GridCapacity; // 0x0
	unsigned int m_CellCountX; // 0x4
	unsigned int m_CellCountZ; // 0x8
	float m_MaxExtentsX; // 0xc
	float m_MaxExtentsZ; // 0x10
	float m_MinExtentsX; // 0x14
	float m_MinExtentsZ; // 0x18
	unsigned char _0x1c[0x4];
	Array<CrowdPlacementRegionGridElement> m_GridCells; // 0x20
}; // size = 0x28

#endif // FBGEN_CrowdPlacementRegionGrid_H
