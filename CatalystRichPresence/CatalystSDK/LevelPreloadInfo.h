//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelPreloadInfo.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelPreloadInfo_H
#define FBGEN_LevelPreloadInfo_H

#include "Array.h"
struct LevelPreloadInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809248;
	}
	Array<const char*> m_PreloadedBlueprintBundles; // 0x0
	Array<SubLevelPreloadInfo> m_SubLevelPreloadInfoMap; // 0x8
}; // size = 0x10

#endif // FBGEN_LevelPreloadInfo_H
