//
// Generated with FrostbiteGen by Chod
// File: SDK\PamHotSpotEntityData.h
// Created: Wed Mar 10 19:04:27 2021
//

#ifndef FBGEN_PamHotSpotEntityData_H
#define FBGEN_PamHotSpotEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class PamHotSpotEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D6E0;
	}
	Realm m_Realm; // 0x60
	int m_IdleAIProbability; // 0x64
	int m_MonsterClosetProbability; // 0x68
	float m_Radius; // 0x6c
	float m_OuterRadius; // 0x70
	bool m_MonsterClosetAvailable; // 0x74
	bool m_HelicopterAvailable; // 0x75
	bool m_DroneAvailable; // 0x76
	bool m_AllowIdleAIInCityAlert; // 0x77
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PamHotSpotEntityData_H
