//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingSizeConfiguration.h
// Created: Wed Mar 10 19:06:02 2021
//

#ifndef FBGEN_MatchmakingSizeConfiguration_H
#define FBGEN_MatchmakingSizeConfiguration_H

#include "MatchmakingPlatform.h"
#include "Array.h"
struct MatchmakingSizeConfiguration
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DE10;
	}
	MatchmakingPlatform m_Platform; // 0x0
	unsigned char _0x4[0x4];
	Array<const char*> m_Settings; // 0x8
	unsigned int m_DesiredPlayerCount; // 0x10
	unsigned int m_MinPlayerCount; // 0x14
	unsigned int m_MaxPlayerCapacity; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_MinFitThreshold; // 0x20
}; // size = 0x28

#endif // FBGEN_MatchmakingSizeConfiguration_H
