//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRewardsData.h
// Created: Wed Mar 10 19:04:05 2021
//

#ifndef FBGEN_PamRewardsData_H
#define FBGEN_PamRewardsData_H

#include "Array.h"
#include "AntRef.h"
#include "DataContainerPolicyAsset.h"

class PamRewardsData :
	public DataContainerPolicyAsset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878D20;
	}
	Array<PamReward*> m_PamRewards; // 0x18
	AntRef m_MoveEnumAsset; // 0x20
	unsigned int m_MaxMoveSequences; // 0x34
}; // size = 0x38

#endif // FBGEN_PamRewardsData_H
