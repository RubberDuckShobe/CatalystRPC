//
// Generated with FrostbiteGen by Chod
// File: SDK\RunningAverageEntityData.h
// Created: Wed Mar 10 19:02:33 2021
//

#ifndef FBGEN_RunningAverageEntityData_H
#define FBGEN_RunningAverageEntityData_H

#include "Realm.h"
#include "EntityData.h"

class RunningAverageEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5E70;
	}
	Realm m_Realm; // 0x18
	unsigned int m_NumberOfValues; // 0x1c
	float m_In; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_RunningAverageEntityData_H
