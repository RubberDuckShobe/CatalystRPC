//
// Generated with FrostbiteGen by Chod
// File: SDK\SlowMotionEntityData.h
// Created: Wed Mar 10 19:01:20 2021
//

#ifndef FBGEN_SlowMotionEntityData_H
#define FBGEN_SlowMotionEntityData_H

#include "Realm.h"
#include "EntityData.h"

class SlowMotionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820E50;
	}
	Realm m_Realm; // 0x18
	float m_TimeScale; // 0x1c
	float m_ScaleDownTransitionTime; // 0x20
	float m_ScaleUpTransitionTime; // 0x24
}; // size = 0x28

#endif // FBGEN_SlowMotionEntityData_H
