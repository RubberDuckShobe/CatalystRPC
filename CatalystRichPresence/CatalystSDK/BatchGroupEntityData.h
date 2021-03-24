//
// Generated with FrostbiteGen by Chod
// File: SDK\BatchGroupEntityData.h
// Created: Wed Mar 10 19:08:31 2021
//

#ifndef FBGEN_BatchGroupEntityData_H
#define FBGEN_BatchGroupEntityData_H

#include "EntityData.h"

class BatchGroupEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428428B0;
	}
	float m_IntensityMultiplier; // 0x18
	bool m_Enabled; // 0x1c
	unsigned char m_GroupID; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_BatchGroupEntityData_H
