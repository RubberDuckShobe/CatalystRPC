//
// Generated with FrostbiteGen by Chod
// File: SDK\CharacterCustomizationComponentData.h
// Created: Wed Mar 10 19:08:17 2021
//

#ifndef FBGEN_CharacterCustomizationComponentData_H
#define FBGEN_CharacterCustomizationComponentData_H

#include "MeshLodGroup.h"
#include "GameComponentData.h"

class CharacterCustomizationComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816680;
	}
	MeshLodGroup* m_SharedLodGroup; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_CharacterCustomizationComponentData_H
