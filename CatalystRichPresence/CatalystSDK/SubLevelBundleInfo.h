//
// Generated with FrostbiteGen by Chod
// File: SDK\SubLevelBundleInfo.h
// Created: Wed Mar 10 19:00:48 2021
//

#ifndef FBGEN_SubLevelBundleInfo_H
#define FBGEN_SubLevelBundleInfo_H

#include "BundleHeapInfo.h"
#include "BundleType.h"
#include "BundleSettingsInfo.h"
struct SubLevelBundleInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427FBE80;
	}
	int m_CompartmentIndex; // 0x0
	BundleHeapInfo m_HeapInfo; // 0x4
	BundleType m_BundleType; // 0x10
	unsigned char _0x14[0x4];
	BundleSettingsInfo m_BundleSettingsInfo; // 0x18
	unsigned short m_SubLevelNameInx; // 0x28
	unsigned short m_SubLevelId; // 0x2a
	unsigned short m_ParentSubLevelId; // 0x2c
	unsigned char m_Priority; // 0x2e
	unsigned char _0x2f[0x1];
}; // size = 0x30

#endif // FBGEN_SubLevelBundleInfo_H
