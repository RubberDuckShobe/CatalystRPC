//
// Generated with FrostbiteGen by Chod
// File: SDK\AIDirectiveData.h
// Created: Wed Mar 10 19:09:00 2021
//

#ifndef FBGEN_AIDirectiveData_H
#define FBGEN_AIDirectiveData_H

#include "DirectivePriority.h"
#include "EntityData.h"

class AIDirectiveData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B86B0;
	}
	DirectivePriority m_Priority; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_AIDirectiveData_H
