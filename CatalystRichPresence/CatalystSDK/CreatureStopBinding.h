//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureStopBinding.h
// Created: Wed Mar 10 19:07:28 2021
//

#ifndef FBGEN_CreatureStopBinding_H
#define FBGEN_CreatureStopBinding_H

#include "AntRef.h"
struct CreatureStopBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB900;
	}
	AntRef m_AntInStop; // 0x0
	AntRef m_StopAngle; // 0x14
	AntRef m_StopRelativeFacingAngle; // 0x28
	AntRef m_StopPhase; // 0x3c
	AntRef m_StopTrigger; // 0x50
}; // size = 0x64

#endif // FBGEN_CreatureStopBinding_H
