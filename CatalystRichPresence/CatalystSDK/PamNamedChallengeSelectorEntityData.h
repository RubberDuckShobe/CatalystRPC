//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeSelectorEntityData.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeSelectorEntityData_H
#define FBGEN_PamNamedChallengeSelectorEntityData_H

#include "PamNamedChallengeData.h"
#include "EntityData.h"

class PamNamedChallengeSelectorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852B20;
	}
	PamNamedChallengeData* m_ChallengeData; // 0x18
}; // size = 0x20

#endif // FBGEN_PamNamedChallengeSelectorEntityData_H
