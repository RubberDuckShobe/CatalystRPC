//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerScore.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerScore_H
#define FBGEN_PlayerScore_H

struct PlayerScore
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427FBDC0;
	}
	int m_Rank; // 0x0
	unsigned int m_Kills; // 0x4
	unsigned int m_Deaths; // 0x8
	unsigned int m_ScoreMultiplier; // 0xc
	int m_Score; // 0x10
	int m_GlobalScoreOriginal; // 0x14
	int m_GlobalScoreUpdated; // 0x18
	float m_Time; // 0x1c
}; // size = 0x20

#endif // FBGEN_PlayerScore_H
