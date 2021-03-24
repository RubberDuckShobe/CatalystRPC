//
// Generated with FrostbiteGen by Chod
// File: SDK\DebugCompleteMission.h
// Created: Wed Mar 10 19:07:18 2021
//

#ifndef FBGEN_DebugCompleteMission_H
#define FBGEN_DebugCompleteMission_H

#include "PamProgressionMission.h"
#include "DataContainer.h"

class DebugCompleteMission :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873240;
	}
	PamProgressionMission* m_MissionSetAsCompleted; // 0x10
}; // size = 0x18

#endif // FBGEN_DebugCompleteMission_H
