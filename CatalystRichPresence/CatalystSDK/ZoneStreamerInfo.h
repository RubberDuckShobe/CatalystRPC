//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerInfo.h
// Created: Wed Mar 10 18:58:41 2021
//

#ifndef FBGEN_ZoneStreamerInfo_H
#define FBGEN_ZoneStreamerInfo_H

#include "ResourceRef.h"
#include "Array.h"
struct ZoneStreamerInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289F878;
	}
	ResourceRef m_GridResource; // 0x0
	const char* m_SubLevelPath; // 0x8
	Array<ZoneStreamerZoneInfo> m_ZoneInfos; // 0x10
	Array<short> m_BundleParents; // 0x18
	Array<const char*> m_BundleNames; // 0x20
	Array<unsigned int> m_RegionSuperbundles; // 0x28
}; // size = 0x30

#endif // FBGEN_ZoneStreamerInfo_H
