//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUINotificationReceiverEntityData.h
// Created: Wed Mar 10 19:03:25 2021
//

#ifndef FBGEN_PamUINotificationReceiverEntityData_H
#define FBGEN_PamUINotificationReceiverEntityData_H

#include "Realm.h"
#include "PamUINotificationType.h"
#include "EntityData.h"

class PamUINotificationReceiverEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A5E0;
	}
	Realm m_Realm; // 0x18
	PamUINotificationType m_ListenType; // 0x1c
	bool m_Enabled; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamUINotificationReceiverEntityData_H
