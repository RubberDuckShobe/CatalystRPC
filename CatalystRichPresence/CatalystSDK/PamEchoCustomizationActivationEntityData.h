//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEchoCustomizationActivationEntityData.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamEchoCustomizationActivationEntityData_H
#define FBGEN_PamEchoCustomizationActivationEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamEchoCustomizationActivationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878660;
	}
	Realm m_Realm; // 0x18
	unsigned int m_NewEchoNameHash; // 0x1c
}; // size = 0x20

#endif // FBGEN_PamEchoCustomizationActivationEntityData_H
