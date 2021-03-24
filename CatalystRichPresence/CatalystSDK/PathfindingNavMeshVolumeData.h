//
// Generated with FrostbiteGen by Chod
// File: SDK\PathfindingNavMeshVolumeData.h
// Created: Wed Mar 10 19:03:16 2021
//

#ifndef FBGEN_PathfindingNavMeshVolumeData_H
#define FBGEN_PathfindingNavMeshVolumeData_H

#include "PathfindingObjectCategoryAsset.h"
#include "OBBData.h"

class PathfindingNavMeshVolumeData :
	public OBBData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828FB0;
	}
	PathfindingObjectCategoryAsset* m_Category; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PathfindingNavMeshVolumeData_H
