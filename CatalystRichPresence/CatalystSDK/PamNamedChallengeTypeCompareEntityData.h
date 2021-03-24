//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeTypeCompareEntityData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeTypeCompareEntityData_H
#define FBGEN_PamNamedChallengeTypeCompareEntityData_H

#include "Realm.h"
#include "EntityData.h"

class PamNamedChallengeTypeCompareEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852580;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_DataChallengeTypeName; // 0x20
	const char* m_ChallengeTypeName; // 0x28
}; // size = 0x30

#endif // FBGEN_PamNamedChallengeTypeCompareEntityData_H
