//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayAnimationEntityData.h
// Created: Wed Mar 10 19:03:06 2021
//

#ifndef FBGEN_PlayAnimationEntityData_H
#define FBGEN_PlayAnimationEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "PlayAnimationData.h"
#include "EntityData.h"

class PlayAnimationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810F20;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_EntitySpace0; // 0x20
	LinearTransform m_EntitySpace1; // 0x60
	LinearTransform m_EntitySpace2; // 0xa0
	LinearTransform m_EntitySpace3; // 0xe0
	LinearTransform m_EntitySpace4; // 0x120
	PlayAnimationData* m_Animation; // 0x160
	float m_ExternalTime; // 0x168
	float m_LifeTime; // 0x16c
	float m_AlignValue; // 0x170
	bool m_Replicated; // 0x174
	unsigned char _0x175[0xb];
}; // size = 0x180

#endif // FBGEN_PlayAnimationEntityData_H
