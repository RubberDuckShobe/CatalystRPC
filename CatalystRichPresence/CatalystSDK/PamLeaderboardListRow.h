//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLeaderboardListRow.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLeaderboardListRow_H
#define FBGEN_PamLeaderboardListRow_H

#include "LocalizedString.h"
#include "PamOnlineIdData.h"
#include "PamListRow.h"

class PamLeaderboardListRow :
	public PamListRow // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288AB80;
	}
	int m_Position; // 0x18
	unsigned char _0x1c[0x4];
	unsigned long m_ValueAsDate; // 0x20
	int m_GlobalRank; // 0x28
	int m_Percentile; // 0x2c
	LocalizedString* m_LocalizedName; // 0x30
	int m_Value; // 0x38
	int m_StarsCount; // 0x3c
	PamOnlineIdData* m_UserId; // 0x40
	const char* m_DivisionTextureId; // 0x48
	bool m_ValueIsDate; // 0x50
	bool m_IsLocalPlayer; // 0x51
	bool m_IsInjectedGlobalLeader; // 0x52
	bool m_HasStars; // 0x53
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_PamLeaderboardListRow_H
