//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStartPointEntityData.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamStartPointEntityData_H
#define FBGEN_PamStartPointEntityData_H

#include "Array.h"
#include "StartPointEntityData.h"

class PamStartPointEntityData :
	public StartPointEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873180;
	}
	unsigned int m_NameHash; // 0x20
	unsigned char _0x24[0x4];
	Array<DebugFlagValue*> m_DebugFlagValues; // 0x28
	Array<DebugCompleteMission*> m_DebugCompleteMissions; // 0x30
	Array<PamFlagsCollectionAsset*> m_DebugFlagAssets; // 0x38
	bool m_ApplyDebugFlags; // 0x40
	bool m_SavePlayerTransform; // 0x41
	unsigned char _0x42[0x6];
}; // size = 0x48

#endif // FBGEN_PamStartPointEntityData_H
