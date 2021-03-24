//
// Generated with FrostbiteGen by Chod
// File: SDK\AdvancedRandomIntEntityData.h
// Created: Wed Mar 10 19:08:48 2021
//

#ifndef FBGEN_AdvancedRandomIntEntityData_H
#define FBGEN_AdvancedRandomIntEntityData_H

#include "Realm.h"
#include "EntityData.h"

class AdvancedRandomIntEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7010;
	}
	Realm m_Realm; // 0x18
	int m_Start; // 0x1c
	int m_Count; // 0x20
	bool m_AllowRepeatingValues; // 0x24
	bool m_DiscardOutputtedValues; // 0x25
	bool m_ResetListWhenDepleted; // 0x26
	unsigned char _0x27[0x1];
}; // size = 0x28

#endif // FBGEN_AdvancedRandomIntEntityData_H
