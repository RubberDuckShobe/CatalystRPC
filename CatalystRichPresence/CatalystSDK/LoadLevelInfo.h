//
// Generated with FrostbiteGen by Chod
// File: SDK\LoadLevelInfo.h
// Created: Wed Mar 10 19:06:12 2021
//

#ifndef FBGEN_LoadLevelInfo_H
#define FBGEN_LoadLevelInfo_H

#include "LevelSetup.h"
#include "Array.h"
struct LoadLevelInfo
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427FBE20;
	}
	LevelSetup m_Setup; // 0x0
	Array<BlueprintBundlePreloadInfo> m_BlueprintBundlePreloads; // 0x28
	unsigned int m_LevelSequenceNumber; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_LoadLevelInfo_H
