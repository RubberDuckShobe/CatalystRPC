//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlagLocationCollectionAsset.h
// Created: Wed Mar 10 19:04:11 2021
//

#ifndef FBGEN_PamProgressionFlagLocationCollectionAsset_H
#define FBGEN_PamProgressionFlagLocationCollectionAsset_H

#include "Array.h"
#include "Asset.h"

class PamProgressionFlagLocationCollectionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428739C0;
	}
	Array<PamProgressionFlagLocationPolicyInfo> m_ProgressionFlagLocationPolicyInfos; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProgressionFlagLocationCollectionAsset_H
