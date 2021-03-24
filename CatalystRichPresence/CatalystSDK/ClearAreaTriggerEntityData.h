//
// Generated with FrostbiteGen by Chod
// File: SDK\ClearAreaTriggerEntityData.h
// Created: Wed Mar 10 19:08:11 2021
//

#ifndef FBGEN_ClearAreaTriggerEntityData_H
#define FBGEN_ClearAreaTriggerEntityData_H

#include "TeamId.h"
#include "TriggerEntityData.h"

class ClearAreaTriggerEntityData :
	public TriggerEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F710;
	}
	TeamId m_TeamOfImmortalSoldiers; // 0x70
	bool m_RemoveSoldiers; // 0x74
	bool m_RemoveVehicles; // 0x75
	bool m_RemoveBangers; // 0x76
	bool m_RemoveEffects; // 0x77
	bool m_RemoveMeshProxies; // 0x78
	bool m_RemoveStaticModels; // 0x79
	bool m_RemoveDebrisClusters; // 0x7a
	bool m_ExcludeImmortalSoldiersInTeam; // 0x7b
	unsigned char _0x7c[0x4];
}; // size = 0x80

#endif // FBGEN_ClearAreaTriggerEntityData_H
