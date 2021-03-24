//
// Generated with FrostbiteGen by Chod
// File: SDK\OccluderMeshEntityData.h
// Created: Wed Mar 10 19:05:29 2021
//

#ifndef FBGEN_OccluderMeshEntityData_H
#define FBGEN_OccluderMeshEntityData_H

#include "RigidMeshAsset.h"
#include "SpatialEntityData.h"

class OccluderMeshEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142841B90;
	}
	RigidMeshAsset* m_Mesh; // 0x60
	unsigned char _0x68[0x8];
}; // size = 0x70

#endif // FBGEN_OccluderMeshEntityData_H
