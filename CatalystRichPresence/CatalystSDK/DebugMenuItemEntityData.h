//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugMenuItemEntityData.h
// Created: Wed Mar 10 19:07:17 2021
//

#ifndef FBGEN_DebugMenuItemEntityData_H
#define FBGEN_DebugMenuItemEntityData_H

#include "DebugMenuItemType.h"
#include "EntityData.h"

class DebugMenuItemEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428203D0;
	}
	DebugMenuItemType m_ItemType; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_Text; // 0x20
}; // size = 0x28

#endif // FBGEN_DebugMenuItemEntityData_H
