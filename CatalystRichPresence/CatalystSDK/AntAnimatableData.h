//
// Generated with FrostbiteGen by Chod
// File: SDK\AntAnimatableData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntAnimatableData_H
#define FBGEN_AntAnimatableData_H

#include "AntRef.h"
#include "MasterSkeletonAsset.h"
struct AntAnimatableData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2CE8;
	}
	AntRef m_Actor; // 0x0
	AntRef m_SceneOpMatrix; // 0x14
	AntRef m_CollisionWorld; // 0x28
	AntRef m_RightHandEffectorDisableOverride; // 0x3c
	AntRef m_LeftHandEffectorDisableOverride; // 0x50
	unsigned char _0x64[0x4];
	MasterSkeletonAsset* m_MasterSkeletonAsset; // 0x68
}; // size = 0x70

#endif // FBGEN_AntAnimatableData_H
