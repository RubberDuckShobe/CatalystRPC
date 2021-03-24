//
// Generated with FrostbiteGen by Chod
// File: SDK\PamDynamicNamedChallengeSelectorEntityData.h
// Created: Wed Mar 10 19:04:41 2021
//

#ifndef FBGEN_PamDynamicNamedChallengeSelectorEntityData_H
#define FBGEN_PamDynamicNamedChallengeSelectorEntityData_H

#include "Realm.h"
#include "PamNamedChallengeData.h"
#include "PamNamedChallengeSelectorEntityData.h"

class PamDynamicNamedChallengeSelectorEntityData :
	public PamNamedChallengeSelectorEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852AC0;
	}
	Realm m_Realm; // 0x20
	unsigned char _0x24[0x4];
	PamNamedChallengeData* m_DynamicChallengeData; // 0x28
}; // size = 0x30

#endif // FBGEN_PamDynamicNamedChallengeSelectorEntityData_H
