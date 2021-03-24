//
// Generated with FrostbiteGen by Chod
// File: SDK\LogicReferenceObjectData.h
// Created: Wed Mar 10 19:06:06 2021
//

#ifndef FBGEN_LogicReferenceObjectData_H
#define FBGEN_LogicReferenceObjectData_H

#include "LocalPlayerId.h"
#include "SubRealm.h"
#include "ReferenceObjectData.h"

class LogicReferenceObjectData :
	public ReferenceObjectData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7BB0;
	}
	LocalPlayerId m_LocalPlayerId; // 0x90
	SubRealm m_SubRealm; // 0x94
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_LogicReferenceObjectData_H
