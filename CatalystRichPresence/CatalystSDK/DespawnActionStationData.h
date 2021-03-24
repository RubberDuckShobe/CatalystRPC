//
// Generated with FrostbiteGen by Chod
// File: SDK\DespawnActionStationData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DespawnActionStationData_H
#define FBGEN_DespawnActionStationData_H

#include "ActionStationData.h"

class DespawnActionStationData :
	public ActionStationData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7C90;
	}
	float m_MinEnemyDistance; // 0xb0
	unsigned char _0xb4[0xc];
}; // size = 0xc0

#endif // FBGEN_DespawnActionStationData_H
