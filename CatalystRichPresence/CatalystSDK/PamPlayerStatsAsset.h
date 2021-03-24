//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerStatsAsset.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerStatsAsset_H
#define FBGEN_PamPlayerStatsAsset_H

#include "Array.h"
#include "Asset.h"

class PamPlayerStatsAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880410;
	}
	Array<PamStat> m_Stats; // 0x18
	Array<PamPlayerStatsScope*> m_Scopes; // 0x20
}; // size = 0x28

#endif // FBGEN_PamPlayerStatsAsset_H
