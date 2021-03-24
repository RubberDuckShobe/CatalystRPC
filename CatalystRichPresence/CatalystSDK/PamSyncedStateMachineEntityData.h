//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSyncedStateMachineEntityData.h
// Created: Wed Mar 10 19:03:44 2021
//

#ifndef FBGEN_PamSyncedStateMachineEntityData_H
#define FBGEN_PamSyncedStateMachineEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamSyncedStateMachineEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DEC0;
	}
	Array<PamStateTransitionInfo> m_Transitions; // 0x18
	Array<PamStateInfo> m_StateInfo; // 0x20
	unsigned int m_InitStateHash; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_PamSyncedStateMachineEntityData_H
