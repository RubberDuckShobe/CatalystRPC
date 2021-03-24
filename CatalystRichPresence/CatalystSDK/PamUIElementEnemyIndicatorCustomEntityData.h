//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementEnemyIndicatorCustomEntityData.h
// Created: Wed Mar 10 19:03:36 2021
//

#ifndef FBGEN_PamUIElementEnemyIndicatorCustomEntityData_H
#define FBGEN_PamUIElementEnemyIndicatorCustomEntityData_H

#include "LinearTransform.h"
#include "Array.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementEnemyIndicatorCustomEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888C00;
	}
	LinearTransform m_PlayerTransform; // 0x110
	Array<PamUIEnemyType> m_EnemyTypes; // 0x150
	float m_Radius; // 0x158
	int m_MaxEnemies; // 0x15c
}; // size = 0x160

#endif // FBGEN_PamUIElementEnemyIndicatorCustomEntityData_H
