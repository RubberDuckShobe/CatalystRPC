//
// Generated with FrostbiteGen by Chod
// File: SDK\PamCreatureFineMovementBinding.h
// Created: Wed Mar 10 19:04:44 2021
//

#ifndef FBGEN_PamCreatureFineMovementBinding_H
#define FBGEN_PamCreatureFineMovementBinding_H

#include "AntRef.h"
struct PamCreatureFineMovementBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287C0F8;
	}
	AntRef m_AntInFine; // 0x0
	AntRef m_RelativeLeftRight; // 0x14
	AntRef m_RelativeFrontBack; // 0x28
	AntRef m_FineMoveTrigger; // 0x3c
}; // size = 0x50

#endif // FBGEN_PamCreatureFineMovementBinding_H
