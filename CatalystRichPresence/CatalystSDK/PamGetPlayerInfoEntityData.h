//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGetPlayerInfoEntityData.h
// Created: Wed Mar 10 19:04:28 2021
//

#ifndef FBGEN_PamGetPlayerInfoEntityData_H
#define FBGEN_PamGetPlayerInfoEntityData_H

#include "PamPlayerInfoProgressionDescriptionAsset.h"
#include "PamOnlineIdData.h"
#include "EntityData.h"

class PamGetPlayerInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428527C0;
	}
	PamPlayerInfoProgressionDescriptionAsset* m_ProgressionDescription; // 0x18
	PamOnlineIdData* m_PlayerOnlineId; // 0x20
}; // size = 0x28

#endif // FBGEN_PamGetPlayerInfoEntityData_H
