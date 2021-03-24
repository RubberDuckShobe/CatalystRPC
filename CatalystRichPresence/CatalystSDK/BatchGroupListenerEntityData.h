//
// Generated with FrostbiteGen by Chod
// File: SDK\BatchGroupListenerEntityData.h
// Created: Wed Mar 10 19:08:31 2021
//

#ifndef FBGEN_BatchGroupListenerEntityData_H
#define FBGEN_BatchGroupListenerEntityData_H

#include "EntityData.h"

class BatchGroupListenerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142842850;
	}
	unsigned int m_GroupID; // 0x18
	bool m_Enabled; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_BatchGroupListenerEntityData_H
