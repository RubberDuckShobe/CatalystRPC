//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIEnemyIndicatorEntityData.h
// Created: Wed Mar 10 19:03:32 2021
//

#ifndef FBGEN_PamUIEnemyIndicatorEntityData_H
#define FBGEN_PamUIEnemyIndicatorEntityData_H

#include "PamUIEnemyType.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamUIEnemyIndicatorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428898C0;
	}
	PamUIEnemyType m_EnemyType; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Transform; // 0x20
	float m_Impact; // 0x60
	bool m_Visible; // 0x64
	bool m_CalculateTransformOutputs; // 0x65
	unsigned char _0x66[0xa];
}; // size = 0x70

#endif // FBGEN_PamUIEnemyIndicatorEntityData_H
