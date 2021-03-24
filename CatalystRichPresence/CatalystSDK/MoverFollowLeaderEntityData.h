//
// Generated with FrostbiteGen by Chod
// File: SDK\MoverFollowLeaderEntityData.h
// Created: Wed Mar 10 19:05:44 2021
//

#ifndef FBGEN_MoverFollowLeaderEntityData_H
#define FBGEN_MoverFollowLeaderEntityData_H

#include "FollowMoverSpec.h"
#include "EntityData.h"

class MoverFollowLeaderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428290D0;
	}
	FollowMoverSpec m_FollowingParameters; // 0x18
	unsigned int m_FlockId; // 0x24
}; // size = 0x28

#endif // FBGEN_MoverFollowLeaderEntityData_H
