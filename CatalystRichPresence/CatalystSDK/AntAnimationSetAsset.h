//
// Generated with FrostbiteGen by Chod
// File: SDK\AntAnimationSetAsset.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntAnimationSetAsset_H
#define FBGEN_AntAnimationSetAsset_H

#include "SkeletonAsset.h"
#include "ResourceRef.h"
#include "Array.h"
#include "Asset.h"

class AntAnimationSetAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C2E30;
	}
	SkeletonAsset* m_SkeletonAsset; // 0x18
	ResourceRef m_AssetBankResource; // 0x20
	int m_ActorAssetIndex; // 0x28
	unsigned char _0x2c[0x4];
	Array<int> m_ClipAssetIndices; // 0x30
	Array<int> m_LoopingClipAssetIndices; // 0x38
	int m_SceneOpMatrixAssetIndex; // 0x40
	bool m_UseTraj2Ref; // 0x44
	bool m_AllowAnimationCulling; // 0x45
	unsigned char _0x46[0x2];
}; // size = 0x48

#endif // FBGEN_AntAnimationSetAsset_H
