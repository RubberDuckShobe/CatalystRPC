//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterProxyData.h
// Created: Wed Mar 10 19:08:15 2021
//

#ifndef FBGEN_CharacterProxyData_H
#define FBGEN_CharacterProxyData_H

#include "CharacterSpawnTemplateData.h"
#include "BlueprintProxyData.h"

class CharacterProxyData :
	public BlueprintProxyData // size = 0xf0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C21A0;
	}
	CharacterSpawnTemplateData* m_Template; // 0xf0
	bool m_UseLocalPlayerCharacter; // 0xf8
	unsigned char _0xf9[0x7];
}; // size = 0x100

#endif // FBGEN_CharacterProxyData_H
