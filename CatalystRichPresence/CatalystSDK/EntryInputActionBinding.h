//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryInputActionBinding.h
// Created: Wed Mar 10 19:06:55 2021
//

#ifndef FBGEN_EntryInputActionBinding_H
#define FBGEN_EntryInputActionBinding_H

#include "EntryInputActionType.h"
struct EntryInputActionBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F878;
	}
	int m_Action; // 0x0
	int m_Alias; // 0x4
	EntryInputActionType m_ActionType; // 0x8
	bool m_Networked; // 0xc
	unsigned char _0xd[0x3];
}; // size = 0x10

#endif // FBGEN_EntryInputActionBinding_H
