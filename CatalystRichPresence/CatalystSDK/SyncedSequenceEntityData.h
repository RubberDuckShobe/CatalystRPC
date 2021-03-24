//
// Generated with FrostbiteGen by Chod
// File: SDK\SyncedSequenceEntityData.h
// Created: Wed Mar 10 19:00:36 2021
//

#ifndef FBGEN_SyncedSequenceEntityData_H
#define FBGEN_SyncedSequenceEntityData_H

#include "SequenceEntityData.h"

class SyncedSequenceEntityData :
	public SequenceEntityData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820730;
	}
	bool m_InterpolateTime; // 0x58
	unsigned char _0x59[0x7];
}; // size = 0x60

#endif // FBGEN_SyncedSequenceEntityData_H
