//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdMeshEntityData.h
// Created: Wed Mar 10 19:07:26 2021
//

#ifndef FBGEN_CrowdMeshEntityData_H
#define FBGEN_CrowdMeshEntityData_H

#include "MeshAsset.h"
#include "SpatialEntityData.h"

class CrowdMeshEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894510;
	}
	MeshAsset* m_Mesh; // 0x60
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_CrowdMeshEntityData_H
