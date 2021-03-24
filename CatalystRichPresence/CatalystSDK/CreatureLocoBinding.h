//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureLocoBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureLocoBinding_H
#define FBGEN_CreatureLocoBinding_H

#include "AntRef.h"
struct CreatureLocoBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB960;
	}
	AntRef m_AntInLoco; // 0x0
	AntRef m_LocoTurnPhase; // 0x14
	AntRef m_LocoEndPhase; // 0x28
}; // size = 0x3c

#endif // FBGEN_CreatureLocoBinding_H
