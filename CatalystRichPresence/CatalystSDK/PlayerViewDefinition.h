//
// Generated with FrostbiteGen by Chod
// File: SDK\PlayerViewDefinition.h
// Created: Wed Mar 10 19:03:05 2021
//

#ifndef FBGEN_PlayerViewDefinition_H
#define FBGEN_PlayerViewDefinition_H

#include "LocalPlayerId.h"
#include "Array.h"
struct PlayerViewDefinition
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816060;
	}
	LocalPlayerId m_LocalPlayerId; // 0x0
	unsigned char _0x4[0x4];
	Array<ViewDefinition> m_Views; // 0x8
}; // size = 0x10

#endif // FBGEN_PlayerViewDefinition_H
