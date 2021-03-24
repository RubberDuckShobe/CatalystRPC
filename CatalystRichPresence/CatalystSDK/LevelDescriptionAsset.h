//
// Generated with FrostbiteGen by Chod
// File: SDK\LevelDescriptionAsset.h
// Created: Wed Mar 10 19:06:18 2021
//

#ifndef FBGEN_LevelDescriptionAsset_H
#define FBGEN_LevelDescriptionAsset_H

#include "LevelDescription.h"
#include "Array.h"
#include "Guid.h"
#include "Asset.h"

class LevelDescriptionAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280C0B0;
	}
	const char* m_LevelName; // 0x18
	Array<LevelDescriptionInclusionCategory> m_Categories; // 0x20
	LevelDescription m_Description; // 0x28
	Array<LevelBundleLoad> m_Bundles; // 0x48
	Array<LevelStartPoint> m_StartPoints; // 0x50
	Array<const char*> m_SuperBundles; // 0x58
	Guid m_LevelGuid; // 0x60
}; // size = 0x70

#endif // FBGEN_LevelDescriptionAsset_H
