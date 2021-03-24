//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStatsSettings.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStatsSettings_H
#define FBGEN_PamStatsSettings_H

#include "PamPlayerStatsAsset.h"
#include "PamNamedChallengesAsset.h"
#include "LicenseConfiguration.h"
#include "SystemSettings.h"

class PamStatsSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878840;
	}
	PamPlayerStatsAsset* m_PlayerStatsAsset; // 0x20
	PamNamedChallengesAsset* m_NamedChallengesAsset; // 0x28
	LicenseConfiguration* m_LicenseConfig; // 0x30
}; // size = 0x38

#endif // FBGEN_PamStatsSettings_H
