//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUnlockRewardEntityData.h
// Created: Wed Mar 10 19:03:21 2021
//

#ifndef FBGEN_PamUnlockRewardEntityData_H
#define FBGEN_PamUnlockRewardEntityData_H

#include "Realm.h"
#include "PamReward.h"
#include "EntityData.h"

class PamUnlockRewardEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878DE0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	PamReward* m_Reward; // 0x20
}; // size = 0x28

#endif // FBGEN_PamUnlockRewardEntityData_H
