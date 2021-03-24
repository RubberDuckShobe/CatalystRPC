//
// Generated with FrostbiteGen by Chod
// File: SDK\ActionStationData.h
// Created: Wed Mar 10 19:08:49 2021
//

#ifndef FBGEN_ActionStationData_H
#define FBGEN_ActionStationData_H

#include "AIReadiness.h"
#include "DirectivePriority.h"
#include "AISpecialization.h"
#include "MoveToActionStationSpeedEnum.h"
#include "AIStateExecuteActionStationData.h"
#include "AIStateData.h"
#include "SpatialEntityData.h"

class ActionStationData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B87D0;
	}
	float m_Radius; // 0x60
	float m_MaxHeightDist; // 0x64
	AIReadiness m_Readiness; // 0x68
	DirectivePriority m_Priority; // 0x6c
	DirectivePriority m_AlternativePriority; // 0x70
	unsigned char _0x74[0x4];
	AISpecialization* m_AllowedAIType; // 0x78
	float m_TimeBetweenUses; // 0x80
	float m_RandomDisableProb; // 0x84
	MoveToActionStationSpeedEnum m_MoveToActionStationSpeed; // 0x88
	float m_PositionalTolerance; // 0x8c
	AIStateExecuteActionStationData* m_ExecuteActionStationState; // 0x90
	AIStateData* m_ActionStationState; // 0x98
	bool m_Enabled; // 0xa0
	bool m_OverrideDistanceCheck; // 0xa1
	bool m_OverrideReachabilityCheck; // 0xa2
	bool m_ExecuteWhenCommitted; // 0xa3
	bool m_UseASRotation; // 0xa4
	bool m_FireWhenMovingToAS; // 0xa5
	bool m_DisableOnAIDeath; // 0xa6
	bool m_UseAlternativePriority; // 0xa7
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_ActionStationData_H
