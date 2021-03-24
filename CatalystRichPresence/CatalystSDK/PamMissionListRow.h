//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMissionListRow.h
// Created: Wed Mar 10 19:04:23 2021
//

#ifndef FBGEN_PamMissionListRow_H
#define FBGEN_PamMissionListRow_H

#include "PamMissionDescriptionData.h"
#include "PamListRow.h"

class PamMissionListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288ACA0;
	}
	PamMissionDescriptionData* m_MissionDescriptionData; // 0x18
	unsigned int m_MissionIndex; // 0x20
	int m_RowIndex; // 0x24
	int m_StarsCount; // 0x28
	int m_GlobalRank; // 0x2c
	int m_FlagAmount; // 0x30
	int m_FlagMaxValue; // 0x34
	int m_Flag2Amount; // 0x38
	int m_Flag2MaxValue; // 0x3c
	int m_Flag3Amount; // 0x40
	int m_Flag3MaxValue; // 0x44
	int m_TimePlayed; // 0x48
	bool m_Active; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_PamMissionListRow_H
