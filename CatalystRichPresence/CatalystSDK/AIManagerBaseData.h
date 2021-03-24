//
// Generated with FrostbiteGen by Chod
// File: SDK\AIManagerBaseData.h
// Created: Wed Mar 10 19:08:59 2021
//

#ifndef FBGEN_AIManagerBaseData_H
#define FBGEN_AIManagerBaseData_H

#include "ManagerSettings.h"
#include "EntityData.h"

class AIManagerBaseData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8590;
	}
	ManagerSettings* m_Settings; // 0x18
}; // size = 0x20

#endif // FBGEN_AIManagerBaseData_H
