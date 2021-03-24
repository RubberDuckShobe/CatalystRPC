//
// Generated with FrostbiteGen by Chod
// File: SDK\PamNamedChallengeStat.h
// Created: Wed Mar 10 19:04:19 2021
//

#ifndef FBGEN_PamNamedChallengeStat_H
#define FBGEN_PamNamedChallengeStat_H

#include "PamStatType.h"
struct PamNamedChallengeStat
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142877200;
	}
	const char* m_Code; // 0x0
	PamStatType m_PropertyType; // 0x8
	int m_DefaultValue; // 0xc
}; // size = 0x10

#endif // FBGEN_PamNamedChallengeStat_H
