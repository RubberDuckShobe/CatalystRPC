//
// Generated with FrostbiteGen by Chod
// File: SDK\PamReputationGateEntityData.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamReputationGateEntityData_H
#define FBGEN_PamReputationGateEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamReputationGateEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873000;
	}
	Realm m_Realm; // 0x18
	float m_ReputationRequired; // 0x1c
	float m_CurrentReputation; // 0x20
	bool m_CompareOnPropertyChanged; // 0x24
	unsigned char _0x25[0x3];
}; // size = 0x28

#endif // FBGEN_PamReputationGateEntityData_H
