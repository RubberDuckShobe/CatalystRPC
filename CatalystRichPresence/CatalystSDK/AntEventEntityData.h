//
// Generated with FrostbiteGen by Chod
// File: SDK\AntEventEntityData.h
// Created: Wed Mar 10 19:08:43 2021
//

#ifndef FBGEN_AntEventEntityData_H
#define FBGEN_AntEventEntityData_H

#include "Array.h"
#include "EntityData.h"

class AntEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818720;
	}
	Array<AntEventData> m_OnEnterEvents; // 0x18
	Array<AntEventData> m_OnUpdateEvents; // 0x20
	Array<AntEventData> m_OnLeaveEvents; // 0x28
	bool m_RequireLink; // 0x30
	bool m_SendAsPlayerEvent; // 0x31
	bool m_AutoActivate; // 0x32
	unsigned char _0x33[0x5];
}; // size = 0x38

#endif // FBGEN_AntEventEntityData_H
