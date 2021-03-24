//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAttentionBinding.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAttentionBinding_H
#define FBGEN_PamAttentionBinding_H

#include "AntRef.h"
struct PamAttentionBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286AB08;
	}
	AntRef m_CombatReadiness; // 0x0
	AntRef m_EnemyAwareness; // 0x14
	AntRef m_FastDeploy; // 0x28
	AntRef m_GuardDeploy; // 0x3c
	AntRef m_debugCrazyBinding; // 0x50
}; // size = 0x64

#endif // FBGEN_PamAttentionBinding_H
