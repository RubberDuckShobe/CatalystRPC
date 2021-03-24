//
// Generated with FrostbiteGen by Chod
// File: SDK\UICombatAreaEntityData.h
// Created: Wed Mar 10 19:00:01 2021
//

#ifndef FBGEN_UICombatAreaEntityData_H
#define FBGEN_UICombatAreaEntityData_H

#include "UICombatAreaAsset.h"
#include "GameObjectData.h"

class UICombatAreaEntityData :
	public GameObjectData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B930;
	}
	UICombatAreaAsset* m_Asset; // 0x18
}; // size = 0x20

#endif // FBGEN_UICombatAreaEntityData_H
