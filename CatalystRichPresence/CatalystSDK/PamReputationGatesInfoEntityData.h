//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReputationGatesInfoEntityData.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamReputationGatesInfoEntityData_H
#define FBGEN_PamReputationGatesInfoEntityData_H

#include "Realm.h"
#include "PamReputationGatesData.h"
#include "EntityData.h"

class PamReputationGatesInfoEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872FA0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamReputationGatesData* m_ReputationGatesData; // 0x20
	float m_CurrentReputation; // 0x28
	bool m_CalculateOnInit; // 0x2c
	bool m_CalculateOnPropertyChanged; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_PamReputationGatesInfoEntityData_H
