//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureLocoMotorComponentData.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureLocoMotorComponentData_H
#define FBGEN_CreatureLocoMotorComponentData_H

#include "CreatureLocoBindings.h"
#include "LocoComponentData.h"

class CreatureLocoMotorComponentData :
	public LocoComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BBB20;
	}
	CreatureLocoBindings* m_AntBindings; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_CreatureLocoMotorComponentData_H
