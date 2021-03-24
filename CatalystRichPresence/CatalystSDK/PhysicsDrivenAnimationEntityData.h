//
// Generated with FrostbiteGen by Chod
// File: SDK\PhysicsDrivenAnimationEntityData.h
// Created: Wed Mar 10 19:03:10 2021
//

#ifndef FBGEN_PhysicsDrivenAnimationEntityData_H
#define FBGEN_PhysicsDrivenAnimationEntityData_H

#include "Realm.h"
#include "PhysicsDrivenAnimationEntityBinding.h"
#include "EntityData.h"

class PhysicsDrivenAnimationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809B30;
	}
	Realm m_Realm; // 0x18
	PhysicsDrivenAnimationEntityBinding m_Binding; // 0x1c
	int m_AnimationEntitySpacePriority; // 0x328
	bool m_UseSpineXFor1p; // 0x32c
	unsigned char _0x32d[0x3];
}; // size = 0x330

#endif // FBGEN_PhysicsDrivenAnimationEntityData_H
