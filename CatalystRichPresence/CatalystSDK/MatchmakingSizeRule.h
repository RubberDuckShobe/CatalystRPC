//
// Generated with FrostbiteGen by Chod
// File: SDK\MatchmakingSizeRule.h
// Created: Wed Mar 10 19:06:02 2021
//

#ifndef FBGEN_MatchmakingSizeRule_H
#define FBGEN_MatchmakingSizeRule_H

#include "Array.h"
struct MatchmakingSizeRule
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284D950;
	}
	Array<const char*> m_Settings; // 0x0
	Array<MatchmakingSizeConfiguration> m_Configurations; // 0x8
}; // size = 0x10

#endif // FBGEN_MatchmakingSizeRule_H
