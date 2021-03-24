//
// Generated with FrostbiteGen by Chod
// File: SDK\BalancedDilationEntityData.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_BalancedDilationEntityData_H
#define FBGEN_BalancedDilationEntityData_H

#include "Realm.h"
#include "TimeShape.h"
#include "EntityData.h"

class BalancedDilationEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E5A50;
	}
	Realm m_Realm; // 0x18
	float m_DilationValue; // 0x1c
	float m_RealTimeDuration; // 0x20
	float m_RecoveryTime; // 0x24
	TimeShape m_DilationShape; // 0x28
	TimeShape m_RecoveryShape; // 0x2c
}; // size = 0x30

#endif // FBGEN_BalancedDilationEntityData_H
