//
// Generated with FrostbiteGen by Chod
// File: SDK\SubWorldData.h
// Created: Wed Mar 10 19:00:42 2021
//

#ifndef FBGEN_SubWorldData_H
#define FBGEN_SubWorldData_H

#include "MaterialGridData.h"
#include "BlueprintPersistenceSetting.h"
#include "AutoAssetCollector.h"
#include "SpatialPrefabBlueprint.h"

class SubWorldData :
	public SpatialPrefabBlueprint // size = 0x50
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC330;
	}
	MaterialGridData* m_RuntimeMaterialGrid; // 0x50
	BlueprintPersistenceSetting m_PersistenceSetting; // 0x58
	unsigned char _0x5c[0x4];
	AutoAssetCollector* m_AutoAssetCollector; // 0x60
	bool m_IsWin32SubLevel; // 0x68
	bool m_IsXenonSubLevel; // 0x69
	bool m_IsPs3SubLevel; // 0x6a
	bool m_IsGen4aSubLevel; // 0x6b
	bool m_IsGen4bSubLevel; // 0x6c
	bool m_IsAndroidSubLevel; // 0x6d
	bool m_IsIOSSubLevel; // 0x6e
	bool m_IsOSXSubLevel; // 0x6f
	bool m_IsLinuxSubLevel; // 0x70
	unsigned char _0x71[0x7];
}; // size = 0x78

#endif // FBGEN_SubWorldData_H
