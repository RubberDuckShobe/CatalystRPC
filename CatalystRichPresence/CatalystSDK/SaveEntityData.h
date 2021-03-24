//
// Generated with FrostbiteGen by Chod
// File: SDK\SaveEntityData.h
// Created: Wed Mar 10 19:02:32 2021
//

#ifndef FBGEN_SaveEntityData_H
#define FBGEN_SaveEntityData_H

#include "TextureAsset.h"
#include "EntityData.h"

class SaveEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B210;
	}
	TextureAsset* m_SaveScreenTexture; // 0x18
	const char* m_LevelName; // 0x20
	const char* m_SaveFileName; // 0x28
	const char* m_SaveNameSID; // 0x30
	bool m_CheckForHumanPlayer; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_SaveEntityData_H
