//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementPointCloudDataAsset.h
// Created: Wed Mar 10 19:07:25 2021
//

#ifndef FBGEN_CrowdPlacementPointCloudDataAsset_H
#define FBGEN_CrowdPlacementPointCloudDataAsset_H

#include "Array.h"
#include "Asset.h"

class CrowdPlacementPointCloudDataAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894810;
	}
	Array<CrowdPlacementPointCloudData> m_PointCloudData; // 0x18
}; // size = 0x20

#endif // FBGEN_CrowdPlacementPointCloudDataAsset_H
