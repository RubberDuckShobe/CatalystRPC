//
// Generated with FrostbiteGen by Chod
// File: SDK\MorphEntityData.h
// Created: Wed Mar 10 19:05:48 2021
//

#ifndef FBGEN_MorphEntityData_H
#define FBGEN_MorphEntityData_H

#include "MorphStatic.h"
#include "MorphTargets.h"
#include "Asset.h"
#include "Array.h"
#include "SpatialEntityData.h"

class MorphEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428262D0;
	}
	MorphStatic* m_MorphAsset; // 0x60
	MorphTargets* m_MorphTargetsAsset; // 0x68
	Array<LinearTransform> m_ModelPose; // 0x70
	Array<int> m_SkeletalHierarchy; // 0x78
	Array<const char*> m_BoneNames; // 0x80
	Asset* m_ActorFaceFXAsset; // 0x88
	Array<Asset*> m_FaceFXPlaylist; // 0x90
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_MorphEntityData_H
