//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsDrivenComponentData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsDrivenComponentData_H
#define FBGEN_PhysicsDrivenComponentData_H

#include "GameComponentData.h"

class PhysicsDrivenComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816FE0;
	}
	float m_SprintMultiplier; // 0x70
	int m_ParachuteToggle; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PhysicsDrivenComponentData_H
