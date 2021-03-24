//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshComponentData.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshComponentData_H
#define FBGEN_MeshComponentData_H

#include "Array.h"
#include "MeshAsset.h"
#include "SkeletonAsset.h"
#include "GameComponentData.h"

class MeshComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E4B0;
	}
	Array<BoneFakePhysicsData*> m_BoneFakePhysics; // 0x70
	MeshAsset* m_Mesh; // 0x78
	SkeletonAsset* m_Skeleton; // 0x80
	unsigned char _0x88[0x8];
}; // size = 0x90

#endif // FBGEN_MeshComponentData_H
