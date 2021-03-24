//
// Generated with FrostbiteGen by Chod
// File: SDK\SwarmEntityData.h
// Created: Wed Mar 10 19:00:38 2021
//

#ifndef FBGEN_SwarmEntityData_H
#define FBGEN_SwarmEntityData_H

#include "GameComponentEntityData.h"

class SwarmEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894B10;
	}
	unsigned int m_MaxDataStoreTypes; // 0x80
	unsigned int m_MaxAgentCount; // 0x84
	unsigned char _0x88[0x8];
}; // size = 0x90

#endif // FBGEN_SwarmEntityData_H
