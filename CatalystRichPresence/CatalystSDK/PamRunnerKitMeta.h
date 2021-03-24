//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitMeta.h
// Created: Wed Mar 10 19:04:03 2021
//

#ifndef FBGEN_PamRunnerKitMeta_H
#define FBGEN_PamRunnerKitMeta_H

#include "Guid.h"
#include "Array.h"
struct PamRunnerKitMeta
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877840;
	}
	Guid m_KitGuid; // 0x0
	Guid m_KitTypeGuid; // 0x10
	const char* m_RewardDescriptionSid; // 0x20
	Array<PamRunnerKitRewardMeta> m_Rewards; // 0x28
}; // size = 0x30

#endif // FBGEN_PamRunnerKitMeta_H
