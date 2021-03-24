//
// Generated with FrostbiteGen by Chod
// File: SDK\SubSkeleton.h
// Created: Wed Mar 10 19:00:44 2021
//

#ifndef FBGEN_SubSkeleton_H
#define FBGEN_SubSkeleton_H

#include "SkeletonAsset.h"
#include "Array.h"
struct SubSkeleton
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5070;
	}
	SkeletonAsset* m_Skeleton; // 0x0
	Array<int> m_BoneMap; // 0x8
	Array<LinearTransform> m_TransformMap; // 0x10
}; // size = 0x18

#endif // FBGEN_SubSkeleton_H
