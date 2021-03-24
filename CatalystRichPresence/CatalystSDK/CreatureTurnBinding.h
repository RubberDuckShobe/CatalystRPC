//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureTurnBinding.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CreatureTurnBinding_H
#define FBGEN_CreatureTurnBinding_H

#include "AntRef.h"
struct CreatureTurnBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB8E0;
	}
	AntRef m_AntInTurn; // 0x0
	AntRef m_TurnAngle; // 0x14
	AntRef m_TurnPhase; // 0x28
	AntRef m_TurnTrigger; // 0x3c
}; // size = 0x50

#endif // FBGEN_CreatureTurnBinding_H
