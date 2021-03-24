//
// Generated with FrostbiteGen by Chod
// File: SDK\SkinnedMeshAsset.h
// Created: Wed Mar 10 19:01:23 2021
//

#ifndef FBGEN_SkinnedMeshAsset_H
#define FBGEN_SkinnedMeshAsset_H

#include "Vec3.h"
#include "MeshAsset.h"

class SkinnedMeshAsset :
	public MeshAsset // size = 0x78
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428343D0;
	}
	bool m_UseDeltaPoseComputation; // 0x78
	unsigned char _0x79[0x7];
	Vec3 m_BoundingBoxPositionOffset; // 0x80
	Vec3 m_BoundingBoxSizeOffset; // 0x90
}; // size = 0xa0

#endif // FBGEN_SkinnedMeshAsset_H
