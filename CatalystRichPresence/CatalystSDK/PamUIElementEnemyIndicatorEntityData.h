//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIElementEnemyIndicatorEntityData.h
// Created: Wed Mar 10 19:03:35 2021
//

#ifndef FBGEN_PamUIElementEnemyIndicatorEntityData_H
#define FBGEN_PamUIElementEnemyIndicatorEntityData_H

#include "LinearTransform.h"
#include "Array.h"
#include "PamUIBlendMode.h"
#include "UIBlendMode.h"
#include "PamUIDynamicElementEntityData.h"

class PamUIElementEnemyIndicatorEntityData :
	public PamUIDynamicElementEntityData // size = 0x110
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142888C60;
	}
	LinearTransform m_PlayerTransform; // 0x110
	Array<PamUIEnemyType> m_EnemyTypes; // 0x150
	float m_BarWidth; // 0x158
	float m_BarRadius; // 0x15c
	float m_EnemyAngle; // 0x160
	float m_MinAngleDiff; // 0x164
	float m_ExtraGeometry; // 0x168
	float m_ImpactSize; // 0x16c
	float m_RampWidth; // 0x170
	unsigned char _0x174[0x4];
	PamUIBlendMode* m_BlendMode; // 0x178
	UIBlendMode m_CoreBlendMode; // 0x180
	bool m_ScreenSpaceRampWidth; // 0x184
	unsigned char _0x185[0xb];
}; // size = 0x190

#endif // FBGEN_PamUIElementEnemyIndicatorEntityData_H
