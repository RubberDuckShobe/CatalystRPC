//
// Generated with FrostbiteGen by Chod
// File: SDK\SubLevelPreloadInfo.h
// Created: Wed Mar 10 19:00:46 2021
//

#ifndef FBGEN_SubLevelPreloadInfo_H
#define FBGEN_SubLevelPreloadInfo_H

#include "Array.h"
struct SubLevelPreloadInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428094C8;
	}
	const char* m_SubLevelBundlePath; // 0x0
	Array<const char*> m_PreloadedBlueprintBundles; // 0x8
}; // size = 0x10

#endif // FBGEN_SubLevelPreloadInfo_H
