//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFirstPartyStoreInteractionEntityData.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFirstPartyStoreInteractionEntityData_H
#define FBGEN_PamFirstPartyStoreInteractionEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamFirstPartyStoreInteractionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881490;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_StoreItemId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamFirstPartyStoreInteractionEntityData_H
