//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureIdleBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureIdleBinding_H
#define FBGEN_CreatureIdleBinding_H

#include "AntRef.h"
struct CreatureIdleBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB980;
	}
	AntRef m_AntInIdle; // 0x0
	AntRef m_AntInIdleTurn; // 0x14
	AntRef m_IdleTurnAngle; // 0x28
	AntRef m_IdleTurnTrigger; // 0x3c
}; // size = 0x50

#endif // FBGEN_CreatureIdleBinding_H
