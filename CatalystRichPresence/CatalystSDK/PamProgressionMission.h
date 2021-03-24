//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionMission.h
// Created: Wed Mar 10 19:04:11 2021
//

#ifndef FBGEN_PamProgressionMission_H
#define FBGEN_PamProgressionMission_H

#include "PamProgressionFlag.h"
#include "PamMissionDescription.h"
#include "PamProgressionMissionType.h"
#include "PamProgressionFlagGroup.h"

class PamProgressionMission :
	public PamProgressionFlagGroup // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873660;
	}
	unsigned int m_MissionIndex; // 0x40
	unsigned char _0x44[0x4];
	PamProgressionFlag* m_CompletedFlag; // 0x48
	PamProgressionFlag* m_AvailableFlag; // 0x50
	PamMissionDescription m_MissionDescription; // 0x58
	int m_Reputation; // 0xa8
	int m_Currency; // 0xac
	PamProgressionMissionType m_MissionType; // 0xb0
	unsigned char _0xb4[0x4];
}; // size = 0xb8

#endif // FBGEN_PamProgressionMission_H
