//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengesAsset.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengesAsset_H
#define FBGEN_PamNamedChallengesAsset_H

#include "Array.h"
#include "PamNamedChallengeDivisionsAsset.h"
#include "PamNamedChallengeTypeData.h"
#include "DataContainerPolicyAsset.h"

class PamNamedChallengesAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877D00;
	}
	Array<PamNamedChallengeTypeData*> m_ChallengeTypes; // 0x18
	Array<PamNamedChallengeData*> m_Challenges; // 0x20
	PamNamedChallengeDivisionsAsset* m_DivisionsAsset; // 0x28
	PamNamedChallengeTypeData* m_HackableBillboardType; // 0x30
}; // size = 0x38

#endif // FBGEN_PamNamedChallengesAsset_H
