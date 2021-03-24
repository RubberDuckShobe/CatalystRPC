//
// Generated with FrostbiteGen by Chod
// File: SDK\StaticModelGroupEntityData.h
// Created: Wed Mar 10 19:00:55 2021
//

#ifndef FBGEN_StaticModelGroupEntityData_H
#define FBGEN_StaticModelGroupEntityData_H

#include "Array.h"
#include "Guid.h"
#include "GamePhysicsEntityData.h"

class StaticModelGroupEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810620;
	}
	Array<StaticModelGroupMemberData> m_MemberDatas; // 0x90
	unsigned int m_NetworkIdCount; // 0x98
	Guid m_HackToSolveRealTimeTweakingIssue; // 0x9c
	unsigned char _0xac[0x4];
}; // size = 0xb0

#endif // FBGEN_StaticModelGroupEntityData_H
