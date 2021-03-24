//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIStateHeliFireAtEnemyData.h
// Created: Wed Mar 10 19:05:13 2021
//

#ifndef FBGEN_PamAIStateHeliFireAtEnemyData_H
#define FBGEN_PamAIStateHeliFireAtEnemyData_H

#include "PamRailRideHeliWaypointData.h"
#include "PamAIStateBaseData.h"

class PamAIStateHeliFireAtEnemyData :
	public PamAIStateBaseData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286D7B0;
	}
	PamRailRideHeliWaypointData* m_IdleWaypointData; // 0x28
	bool m_KeepWeaponActiveOnStop; // 0x30
	unsigned char _0x31[0x7];
}; // size = 0x38

#endif // FBGEN_PamAIStateHeliFireAtEnemyData_H
