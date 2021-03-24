//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPeerFlowGameEntityData.h
// Created: Wed Mar 10 19:04:15 2021
//

#ifndef FBGEN_PamPeerFlowGameEntityData_H
#define FBGEN_PamPeerFlowGameEntityData_H

#include "AntRef.h"
#include "Array.h"
#include "EntityData.h"

class PamPeerFlowGameEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142852940;
	}
	AntRef m_MoveEnumAsset; // 0x18
	unsigned char _0x2c[0x4];
	Array<PamPeerFlowGameMoveInfo> m_Moves; // 0x30
	float m_InitialTimeToComplete; // 0x38
	unsigned char _0x3c[0x4];
}; // size = 0x40

#endif // FBGEN_PamPeerFlowGameEntityData_H
