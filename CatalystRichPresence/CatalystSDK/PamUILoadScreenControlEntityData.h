//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUILoadScreenControlEntityData.h
// Created: Wed Mar 10 19:03:29 2021
//

#ifndef FBGEN_PamUILoadScreenControlEntityData_H
#define FBGEN_PamUILoadScreenControlEntityData_H

#include "LocalizedString.h"
#include "EntityData.h"

class PamUILoadScreenControlEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142889500;
	}
	const char* m_TextureId; // 0x18
	LocalizedString* m_Hint; // 0x20
	bool m_ForceHide; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PamUILoadScreenControlEntityData_H
