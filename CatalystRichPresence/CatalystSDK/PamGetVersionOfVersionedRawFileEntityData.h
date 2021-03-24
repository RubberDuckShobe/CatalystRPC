//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGetVersionOfVersionedRawFileEntityData.h
// Created: Wed Mar 10 19:04:28 2021
//

#ifndef FBGEN_PamGetVersionOfVersionedRawFileEntityData_H
#define FBGEN_PamGetVersionOfVersionedRawFileEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class PamGetVersionOfVersionedRawFileEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D260;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_AssetName; // 0x20
	Array<FileAssetVersion> m_FileAssetVersions; // 0x28
}; // size = 0x30

#endif // FBGEN_PamGetVersionOfVersionedRawFileEntityData_H
