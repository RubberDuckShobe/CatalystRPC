//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerStatsScopeEntityData.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerStatsScopeEntityData_H
#define FBGEN_PamPlayerStatsScopeEntityData_H

#include "PamPlayerStatsScope.h"
#include "Array.h"
#include "EntityData.h"

class PamPlayerStatsScopeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873A80;
	}
	PamPlayerStatsScope* m_Scope; // 0x18
	Array<int> m_OutputPropertyHashes; // 0x20
}; // size = 0x28

#endif // FBGEN_PamPlayerStatsScopeEntityData_H
