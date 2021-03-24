//
// Generated with FrostbiteGen by Chod
// File: SDK\MultipleActorScenarioEntityData.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MultipleActorScenarioEntityData_H
#define FBGEN_MultipleActorScenarioEntityData_H

#include "LinearTransform.h"
#include "AntRef.h"
#include "Realm.h"
#include "SpatialEntityData.h"

class MultipleActorScenarioEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A2B0;
	}
	LinearTransform m_WorldSpaceConnectTransform; // 0x60
	AntRef m_ScenarioAntRef; // 0xa0
	int m_LevelChoice; // 0xb4
	int m_ScenarioChoice; // 0xb8
	int m_Actor1; // 0xbc
	int m_Actor1Part; // 0xc0
	int m_Actor1SecondPart; // 0xc4
	int m_Actor2; // 0xc8
	int m_Actor2Part; // 0xcc
	int m_Actor2SecondPart; // 0xd0
	int m_Actor3; // 0xd4
	int m_Actor3Part; // 0xd8
	int m_Actor3SecondPart; // 0xdc
	int m_Actor4; // 0xe0
	int m_Actor4Part; // 0xe4
	int m_Actor4SecondPart; // 0xe8
	int m_Actor5; // 0xec
	int m_Actor5Part; // 0xf0
	int m_Actor5SecondPart; // 0xf4
	int m_Actor6; // 0xf8
	int m_Actor6Part; // 0xfc
	int m_Actor6SecondPart; // 0x100
	float m_ExternalTime; // 0x104
	Realm m_Realm; // 0x108
	bool m_WorldSpace; // 0x10c
	bool m_AligningEnabled; // 0x10d
	bool m_UseInputEventPlayerAsPlayer1; // 0x10e
	bool m_ScenarioActive; // 0x10f
	bool m_Actor1Prepared; // 0x110
	bool m_Actor2Prepared; // 0x111
	bool m_Actor3Prepared; // 0x112
	bool m_Actor4Prepared; // 0x113
	bool m_Actor5Prepared; // 0x114
	bool m_Actor6Prepared; // 0x115
	bool m_CheckActor1Finished; // 0x116
	bool m_CheckActor2Finished; // 0x117
	bool m_CheckActor3Finished; // 0x118
	bool m_CheckActor4Finished; // 0x119
	bool m_CheckActor5Finished; // 0x11a
	bool m_CheckActor6Finished; // 0x11b
	bool m_UseExternalTime; // 0x11c
	unsigned char _0x11d[0x3];
}; // size = 0x120

#endif // FBGEN_MultipleActorScenarioEntityData_H
