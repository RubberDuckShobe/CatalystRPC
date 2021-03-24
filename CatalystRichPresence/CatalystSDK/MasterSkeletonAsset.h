//
// Generated with FrostbiteGen by Chod
// File: SDK\MasterSkeletonAsset.h
// Created: Wed Mar 10 19:06:04 2021
//

#ifndef FBGEN_MasterSkeletonAsset_H
#define FBGEN_MasterSkeletonAsset_H

#include "SkeletonAsset.h"
#include "Array.h"
#include "Asset.h"

class MasterSkeletonAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5570;
	}
	SkeletonAsset* m_MasterSkeleton; // 0x18
	Array<SubSkeleton> m_SubSkeletons; // 0x20
}; // size = 0x28

#endif // FBGEN_MasterSkeletonAsset_H
