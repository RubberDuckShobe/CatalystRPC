//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitDefinitionsMeta.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunnerKitDefinitionsMeta_H
#define FBGEN_PamRunnerKitDefinitionsMeta_H

#include "Array.h"
#include "DataContainerPolicyAsset.h"

class PamRunnerKitDefinitionsMeta :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428780C0;
	}
	Array<PamRunnerKitMeta> m_RunnerKits; // 0x18
	Array<PamRunnerKitTypeMeta> m_RunnerKitTypes; // 0x20
	Array<PamRunnerKitRewardMeta> m_InitialRewards; // 0x28
}; // size = 0x30

#endif // FBGEN_PamRunnerKitDefinitionsMeta_H
