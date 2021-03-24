//
// Generated with FrostbiteGen by Chod
// File: SDK\SkeletonCollisionData.h
// Created: Wed Mar 10 19:01:23 2021
//

#ifndef FBGEN_SkeletonCollisionData_H
#define FBGEN_SkeletonCollisionData_H

#include "SkeletonAsset.h"
#include "Array.h"
#include "DataContainer.h"

class SkeletonCollisionData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816800;
	}
	SkeletonAsset* m_SkeletonAsset; // 0x10
	Array<BoneCollisionData> m_BoneCollisionData; // 0x18
}; // size = 0x20

#endif // FBGEN_SkeletonCollisionData_H
