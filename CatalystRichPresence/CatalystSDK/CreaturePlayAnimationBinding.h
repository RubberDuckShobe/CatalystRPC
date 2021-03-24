//
// Generated with FrostbiteGen by Chod
// File: SDK\CreaturePlayAnimationBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreaturePlayAnimationBinding_H
#define FBGEN_CreaturePlayAnimationBinding_H

#include "AntRef.h"
struct CreaturePlayAnimationBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB8C0;
	}
	AntRef m_PlayAnimationTrigger; // 0x0
	AntRef m_BranchInPhase; // 0x14
	AntRef m_AlignTranslation; // 0x28
	AntRef m_AlignFacingRotation; // 0x3c
	AntRef m_AntInPlayAnimation; // 0x50
}; // size = 0x64

#endif // FBGEN_CreaturePlayAnimationBinding_H
