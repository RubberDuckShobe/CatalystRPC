//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictPartEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictPartEntityData_H
#define FBGEN_PamMapDistrictPartEntityData_H

#include "TextureAsset.h"
#include "EntityData.h"

class PamMapDistrictPartEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880C50;
	}
	TextureAsset* m_PreviewTexture; // 0x18
	const char* m_LoadScreenTextureId; // 0x20
	const char* m_AreaName; // 0x28
	bool m_Underground; // 0x30
	bool m_Unlocked; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_PamMapDistrictPartEntityData_H
