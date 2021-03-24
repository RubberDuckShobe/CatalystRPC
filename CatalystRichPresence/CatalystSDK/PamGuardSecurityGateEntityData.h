//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGuardSecurityGateEntityData.h
// Created: Wed Mar 10 19:04:28 2021
//

#ifndef FBGEN_PamGuardSecurityGateEntityData_H
#define FBGEN_PamGuardSecurityGateEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamGuardSecurityGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D5C0;
	}
	Realm m_Realm; // 0x18
	bool m_GuardsAreConfused; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_PamGuardSecurityGateEntityData_H
