//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureStartBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureStartBinding_H
#define FBGEN_CreatureStartBinding_H

#include "AntRef.h"
struct CreatureStartBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB920;
	}
	AntRef m_AntInStart; // 0x0
	AntRef m_AntInIdle; // 0x14
	AntRef m_StartFacingOffset; // 0x28
	AntRef m_StartMotionDelta; // 0x3c
	AntRef m_StartTrigger; // 0x50
}; // size = 0x64

#endif // FBGEN_CreatureStartBinding_H
