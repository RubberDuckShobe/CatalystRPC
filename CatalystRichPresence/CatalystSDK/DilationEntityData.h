//
// Generated with FrostbiteGen by Chod
// File: SDK\DilationEntityData.h
// Created: Wed Mar 10 19:07:10 2021
//

#ifndef FBGEN_DilationEntityData_H
#define FBGEN_DilationEntityData_H

#include "Realm.h"
#include "DilationPriority.h"
#include "TimeDeltaType.h"
#include "EntityData.h"

class DilationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5AB0;
	}
	Realm m_Realm; // 0x18
	float m_FadeInTime; // 0x1c
	float m_FadeOutTime; // 0x20
	float m_RealTimeDuration; // 0x24
	DilationPriority m_Priority; // 0x28
	float m_DilationValue; // 0x2c
	TimeDeltaType m_TimeDeltaType; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_DilationEntityData_H
