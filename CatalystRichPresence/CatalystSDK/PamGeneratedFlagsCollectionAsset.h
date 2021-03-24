//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGeneratedFlagsCollectionAsset.h
// Created: Wed Mar 10 19:04:28 2021
//

#ifndef FBGEN_PamGeneratedFlagsCollectionAsset_H
#define FBGEN_PamGeneratedFlagsCollectionAsset_H

#include "Array.h"
#include "Asset.h"

class PamGeneratedFlagsCollectionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873A20;
	}
	Array<PamProgressionGeneratedFlagPolicyInfo> m_GeneratedFlagPolicyInfos; // 0x18
}; // size = 0x20

#endif // FBGEN_PamGeneratedFlagsCollectionAsset_H
