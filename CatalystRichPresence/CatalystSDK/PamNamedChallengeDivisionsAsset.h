//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeDivisionsAsset.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeDivisionsAsset_H
#define FBGEN_PamNamedChallengeDivisionsAsset_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamNamedChallengeDivisionsAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877E20;
	}
	Array<PamNamedChallengeDivision*> m_Divisions; // 0x18
	int m_Ranks; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PamNamedChallengeDivisionsAsset_H
