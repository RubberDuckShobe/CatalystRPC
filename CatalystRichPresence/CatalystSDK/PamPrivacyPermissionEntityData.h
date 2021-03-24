//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPrivacyPermissionEntityData.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamPrivacyPermissionEntityData_H
#define FBGEN_PamPrivacyPermissionEntityData_H

#include "PamOnlineIdData.h"
#include "PrivacyPermission.h"
#include "EntityData.h"

class PamPrivacyPermissionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428525E0;
	}
	PamOnlineIdData* m_OnlineId; // 0x18
	int m_RefreshInterval; // 0x20
	PrivacyPermission m_PrivacyPermission; // 0x24
}; // size = 0x28

#endif // FBGEN_PamPrivacyPermissionEntityData_H
