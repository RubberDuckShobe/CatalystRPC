//
// Generated with FrostbiteGen by Chod
// File: SDK\GroupHavokAsset.h
// Created: Wed Mar 10 19:06:37 2021
//

#ifndef FBGEN_GroupHavokAsset_H
#define FBGEN_GroupHavokAsset_H

#include "Array.h"
#include "HavokAsset.h"

class GroupHavokAsset :
	public HavokAsset // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282FCB0;
	}
	Array<AssetAabbs> m_Aabb; // 0x28
}; // size = 0x30

#endif // FBGEN_GroupHavokAsset_H
