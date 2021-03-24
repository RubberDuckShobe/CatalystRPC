//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeDatabaseAsset.h
// Created: Wed Mar 10 19:04:20 2021
//

#ifndef FBGEN_PamNamedChallengeDatabaseAsset_H
#define FBGEN_PamNamedChallengeDatabaseAsset_H

#include "Array.h"
#include "Asset.h"

class PamNamedChallengeDatabaseAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877CA0;
	}
	Array<PamNamedChallengeDatabaseEntry> m_Entries; // 0x18
}; // size = 0x20

#endif // FBGEN_PamNamedChallengeDatabaseAsset_H
