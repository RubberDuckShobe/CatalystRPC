//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCountdownEntityData.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCountdownEntityData_H
#define FBGEN_PamCountdownEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamCountdownEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DE60;
	}
	Realm m_Realm; // 0x18
	float m_Timescale; // 0x1c
	float m_AddValue; // 0x20
	float m_StartValue; // 0x24
}; // size = 0x28

#endif // FBGEN_PamCountdownEntityData_H
