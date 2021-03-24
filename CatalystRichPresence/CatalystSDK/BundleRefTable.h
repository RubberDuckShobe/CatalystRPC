//
// Generated with FrostbiteGen by Chod
// File: SDK\BundleRefTable.h
// Created: Wed Mar 10 19:08:22 2021
//

#ifndef FBGEN_BundleRefTable_H
#define FBGEN_BundleRefTable_H

#include "BlueprintBundleSettings.h"
#include "Array.h"
#include "AssetGatherer.h"

class BundleRefTable :
	public AssetGatherer // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB060;
	}
	BlueprintBundleSettings m_BundleSettings; // 0x20
	Array<BundleRefAssetInfo> m_BundleRefAssetInfo; // 0x40
	Array<SharedBundleReference> m_Parents; // 0x48
	const char* m_BundleNameExtension; // 0x50
	bool m_CreateFileNameMap; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_BundleRefTable_H
