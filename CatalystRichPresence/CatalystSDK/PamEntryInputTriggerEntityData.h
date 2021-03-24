//
// Generated with FrostbiteGen by Chod
// File: SDK\PamEntryInputTriggerEntityData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamEntryInputTriggerEntityData_H
#define FBGEN_PamEntryInputTriggerEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamEntryInputTriggerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CFC0;
	}
	Array<PamEntryInputTriggerInfo> m_Triggers; // 0x18
	bool m_Enabled; // 0x20
	bool m_DisableOnTrigger; // 0x21
	bool m_DisableOnRelease; // 0x22
	bool m_DisableOnHoldDown; // 0x23
	bool m_AutoDescriptionOn; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamEntryInputTriggerEntityData_H
