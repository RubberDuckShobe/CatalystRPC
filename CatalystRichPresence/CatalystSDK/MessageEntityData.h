//
// Generated with FrostbiteGen by Chod
// File: SDK\MessageEntityData.h
// Created: Wed Mar 10 19:05:53 2021
//

#ifndef FBGEN_MessageEntityData_H
#define FBGEN_MessageEntityData_H

#include "MessageEntityInfo.h"
#include "EntityData.h"

class MessageEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B390;
	}
	MessageEntityInfo* m_MessageInfo; // 0x18
	bool m_Enabled; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_MessageEntityData_H
