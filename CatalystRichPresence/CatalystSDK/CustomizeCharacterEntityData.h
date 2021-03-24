//
// Generated with FrostbiteGen by Chod
// File: SDK\CustomizeCharacterEntityData.h
// Created: Wed Mar 10 19:07:21 2021
//

#ifndef FBGEN_CustomizeCharacterEntityData_H
#define FBGEN_CustomizeCharacterEntityData_H

#include "CustomizeCharacterData.h"
#include "CustomizeBaseEntityData.h"

class CustomizeCharacterEntityData :
	public CustomizeBaseEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280AC10;
	}
	CustomizeCharacterData* m_CustomizeCharacterData; // 0x20
}; // size = 0x28

#endif // FBGEN_CustomizeCharacterEntityData_H
