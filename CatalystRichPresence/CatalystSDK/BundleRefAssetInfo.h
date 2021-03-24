//
// Generated with FrostbiteGen by Chod
// File: SDK\BundleRefAssetInfo.h
// Created: Wed Mar 10 19:08:22 2021
//

#ifndef FBGEN_BundleRefAssetInfo_H
#define FBGEN_BundleRefAssetInfo_H

#include "BundleLoadingType.h"
struct BundleRefAssetInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BAFB8;
	}
	unsigned int m_FullPathKey; // 0x0
	unsigned int m_FileNameKey; // 0x4
	const char* m_AssetName; // 0x8
	BundleLoadingType m_BundleLoadingType; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_BundleRefAssetInfo_H
