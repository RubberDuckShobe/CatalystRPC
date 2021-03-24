//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldReferenceObjectData.h
// Created: Wed Mar 10 19:00:41 2021
//

#ifndef FBGEN_SubWorldReferenceObjectData_H
#define FBGEN_SubWorldReferenceObjectData_H

#include "Array.h"
#include "BundleHeapInfo.h"
#include "SubWorldInclusionSettings.h"
#include "ReferenceObjectData.h"

class SubWorldReferenceObjectData :
	public ReferenceObjectData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC270;
	}
	const char* m_BundleName; // 0x90
	Array<const char*> m_PreloadedBundleNames; // 0x98
	BundleHeapInfo m_BundleHeap; // 0xa0
	unsigned char _0xac[0x4];
	SubWorldInclusionSettings* m_InclusionSettings; // 0xb0
	bool m_AutoLoad; // 0xb8
	bool m_IsWin32SubLevel; // 0xb9
	bool m_IsXenonSubLevel; // 0xba
	bool m_IsPs3SubLevel; // 0xbb
	bool m_IsGen4aSubLevel; // 0xbc
	bool m_IsGen4bSubLevel; // 0xbd
	bool m_IsIOSSubLevel; // 0xbe
	bool m_IsAndroidSubLevel; // 0xbf
	bool m_IsOSXSubLevel; // 0xc0
	bool m_IsLinuxSubLevel; // 0xc1
	unsigned char _0xc2[0xe];
}; // size = 0xd0

#endif // FBGEN_SubWorldReferenceObjectData_H
