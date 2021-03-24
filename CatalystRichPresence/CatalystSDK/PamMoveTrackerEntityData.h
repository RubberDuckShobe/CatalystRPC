//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveTrackerEntityData.h
// Created: Wed Mar 10 19:04:22 2021
//

#ifndef FBGEN_PamMoveTrackerEntityData_H
#define FBGEN_PamMoveTrackerEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamMoveTrackerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428852E0;
	}
	Array<PamMoveTrackerMoveCondition> m_MoveConditions; // 0x18
	Array<PamMoveTrackerEventData> m_OutputEvents; // 0x20
	Array<PamTelemetryMove> m_TelemetryMoves; // 0x28
	bool m_Enabled; // 0x30
	bool m_TelemetryEnabled; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_PamMoveTrackerEntityData_H
