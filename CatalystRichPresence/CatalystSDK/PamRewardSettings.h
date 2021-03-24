//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRewardSettings.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamRewardSettings_H
#define FBGEN_PamRewardSettings_H

#include "PamRewardsData.h"
#include "SystemSettings.h"

class PamRewardSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878CC0;
	}
	PamRewardsData* m_RewardsData; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRewardSettings_H
