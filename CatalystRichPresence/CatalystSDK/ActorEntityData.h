//
// Generated with FrostbiteGen by Chod
// File: SDK\ActorEntityData.h
// Created: Wed Mar 10 19:08:48 2021
//

#ifndef FBGEN_ActorEntityData_H
#define FBGEN_ActorEntityData_H

#include "MeshAsset.h"
#include "GamePhysicsEntityData.h"

class ActorEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C22C0;
	}
	MeshAsset* m_Mesh; // 0x90
	bool m_MoveAnimatableWithActor; // 0x98
	unsigned char _0x99[0x7];
}; // size = 0xa0

#endif // FBGEN_ActorEntityData_H
