//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitDefinitionsAsset.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunnerKitDefinitionsAsset_H
#define FBGEN_PamRunnerKitDefinitionsAsset_H

#include "Array.h"
#include "PamRunnerKitInitialRewardsData.h"
#include "DataContainerPolicyAsset.h"

class PamRunnerKitDefinitionsAsset :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878120;
	}
	Array<PamRunnerKitData*> m_Kits; // 0x18
	Array<PamRunnerKitTypeData*> m_KitTypes; // 0x20
	PamRunnerKitInitialRewardsData* m_InitialRewards; // 0x28
}; // size = 0x30

#endif // FBGEN_PamRunnerKitDefinitionsAsset_H
