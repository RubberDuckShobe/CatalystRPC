//
// Generated with FrostbiteGen by Chod
// File: SDK\AICoordinatorData.h
// Created: Wed Mar 10 19:09:00 2021
//

#ifndef FBGEN_AICoordinatorData_H
#define FBGEN_AICoordinatorData_H

#include "Array.h"
#include "AIDifficultySetting.h"
#include "EntityData.h"

class AICoordinatorData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7870;
	}
	Array<TokenDataSetting*> m_TokenSettings; // 0x18
	unsigned int m_AIsToUpdatePerTick; // 0x20
	AIDifficultySetting m_DifficultySetting; // 0x24
}; // size = 0x28

#endif // FBGEN_AICoordinatorData_H
