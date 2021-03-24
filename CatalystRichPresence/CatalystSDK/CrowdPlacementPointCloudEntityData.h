//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementPointCloudEntityData.h
// Created: Wed Mar 10 19:07:25 2021
//

#ifndef FBGEN_CrowdPlacementPointCloudEntityData_H
#define FBGEN_CrowdPlacementPointCloudEntityData_H

#include "Vec3.h"
#include "CrowdPlacementPointCloudDataAsset.h"
#include "CrowdPlacementBaseEntityData.h"

class CrowdPlacementPointCloudEntityData :
	public CrowdPlacementBaseEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428946F0;
	}
	Vec3 m_CrowdAdjustment; // 0x70
	CrowdPlacementPointCloudDataAsset* m_CrowdPlacementPointCloud; // 0x80
	int m_Weight; // 0x88
	unsigned char _0x8c[0x4];
}; // size = 0x90

#endif // FBGEN_CrowdPlacementPointCloudEntityData_H
