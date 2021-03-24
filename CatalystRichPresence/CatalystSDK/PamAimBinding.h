//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAimBinding.h
// Created: Wed Mar 10 19:05:09 2021
//

#ifndef FBGEN_PamAimBinding_H
#define FBGEN_PamAimBinding_H

#include "AntRef.h"
struct PamAimBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AAE8;
	}
	AntRef m_Pitch; // 0x0
	AntRef m_Yaw; // 0x14
	AntRef m_ReadyWeapon; // 0x28
	AntRef m_AnimationAllowsHit; // 0x3c
}; // size = 0x50

#endif // FBGEN_PamAimBinding_H
