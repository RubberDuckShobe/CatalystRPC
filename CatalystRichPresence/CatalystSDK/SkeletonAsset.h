//
// Generated with FrostbiteGen by Chod
// File: SDK\SkeletonAsset.h
// Created: Wed Mar 10 19:01:23 2021
//

#ifndef FBGEN_SkeletonAsset_H
#define FBGEN_SkeletonAsset_H

#include "Array.h"
#include "BaseSkeletonAsset.h"

class SkeletonAsset :
	public BaseSkeletonAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E55D0;
	}
	Array<const char*> m_BoneNames; // 0x18
	Array<unsigned int> m_BoneNameHashes; // 0x20
	Array<int> m_Hierarchy; // 0x28
	Array<LinearTransform> m_LocalPose; // 0x30
	Array<LinearTransform> m_ModelPose; // 0x38
	Array<int> m_ServerSkeletonToSkeletonMap; // 0x40
	Array<int> m_SkeletonToServerSkeletonMap; // 0x48
	Array<int> m_ServerHierarchy; // 0x50
	Array<int> m_GameplayBonesToSkeleton; // 0x58
	Array<int> m_GameplayBonesToServerSkeleton; // 0x60
}; // size = 0x68

#endif // FBGEN_SkeletonAsset_H
