//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUISystemEntityData.h
// Created: Wed Mar 10 19:03:22 2021
//

#ifndef FBGEN_PamUISystemEntityData_H
#define FBGEN_PamUISystemEntityData_H

#include "Realm.h"
#include "PamOnlineIdData.h"
#include "EntityData.h"

class PamUISystemEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A460;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamOnlineIdData* m_ProfileCardPlayerId; // 0x20
	bool m_DisableDisconnectPopup; // 0x28
	unsigned char _0x29[0x7];
}; // size = 0x30

#endif // FBGEN_PamUISystemEntityData_H
