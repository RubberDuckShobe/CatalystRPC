//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUINotificationSenderEntityData.h
// Created: Wed Mar 10 19:03:25 2021
//

#ifndef FBGEN_PamUINotificationSenderEntityData_H
#define FBGEN_PamUINotificationSenderEntityData_H

#include "Realm.h"
#include "PamUINotificationType.h"
#include "DiceUIVectorShapeAsset.h"
#include "LocalizedString.h"
#include "EntityData.h"

class PamUINotificationSenderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A640;
	}
	Realm m_Realm; // 0x18
	PamUINotificationType m_NotifyType; // 0x1c
	DiceUIVectorShapeAsset* m_IconShape; // 0x20
	LocalizedString* m_LocalizedLabel; // 0x28
	LocalizedString* m_LocalizedText; // 0x30
	LocalizedString* m_LocalizedConfirmText; // 0x38
	LocalizedString* m_LocalizedAbortText; // 0x40
	int m_Priority; // 0x48
	bool m_HideOnDestroy; // 0x4c
	bool m_HasConfirm; // 0x4d
	bool m_HasAbort; // 0x4e
	bool m_BlockClientStateChange; // 0x4f
}; // size = 0x50

#endif // FBGEN_PamUINotificationSenderEntityData_H
