//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryComponentData.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntryComponentData_H
#define FBGEN_EntryComponentData_H

#include "Vec3.h"
#include "EntryClass.h"
#include "GameAIEntryData.h"
#include "EntryInputActionMapsData.h"
#include "InputActionMappingsData.h"
#include "Array.h"
#include "EntryComponentHudData.h"
#include "EntrySpottingSettings.h"
#include "PoseConstraintsData.h"
#include "GameComponentData.h"

class EntryComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816980;
	}
	Vec3 m_ClearPathToExitPointStartOffset; // 0x70
	Vec3 m_SoldierOffset; // 0x80
	EntryClass m_EntryClass; // 0x90
	unsigned char _0x94[0x4];
	GameAIEntryData* m_AIData; // 0x98
	EntryInputActionMapsData* m_InputConceptDefinition; // 0xa0
	InputActionMappingsData* m_InputMapping; // 0xa8
	Array<InputCurveData*> m_InputCurves; // 0xb0
	EntryComponentHudData m_HudData; // 0xb8
	int m_EntryOrderNumber; // 0xc4
	float m_EnterImpulse; // 0xc8
	float m_EntryRadius; // 0xcc
	float m_SoldierTransitionInvisbleTime; // 0xd0
	EntrySpottingSettings m_EntrySpottingSettings; // 0xd4
	int m_TriggerEventOnKey; // 0xd8
	int m_CameraIndex; // 0xdc
	bool m_ForbiddenForHuman; // 0xe0
	bool m_IsAllowedToExitInAir; // 0xe1
	bool m_IsShielded; // 0xe2
	bool m_LockSoldierAimingToEntry; // 0xe3
	bool m_ShowSoldierInEntry; // 0xe4
	bool m_Show1pSoldierInEntry; // 0xe5
	bool m_ShowSoldierWeaponInEntry; // 0xe6
	bool m_Show1pSoldierInEntryForPlayerOnly; // 0xe7
	bool m_Show3pSoldierWeaponInEntry; // 0xe8
	bool m_ShowSoldierGearInEntry; // 0xe9
	PoseConstraintsData m_PoseConstraints; // 0xea
	bool m_AllowRagdollFromEntry; // 0xed
	unsigned char _0xee[0x2];
}; // size = 0xf0

#endif // FBGEN_EntryComponentData_H
