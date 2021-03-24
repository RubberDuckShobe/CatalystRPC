//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIAnimationManagerData.h
// Created: Wed Mar 10 19:05:22 2021
//

#ifndef FBGEN_PamAIAnimationManagerData_H
#define FBGEN_PamAIAnimationManagerData_H

#include "AntRef.h"
#include "PamCustomAnimationBinding.h"
#include "PamAttentionBinding.h"
#include "PamReadinessEnumBinding.h"
#include "PamAwarenessEnumBinding.h"
#include "PamAimBinding.h"
#include "AIAnimationManagerData.h"

class PamAIAnimationManagerData :
	public AIAnimationManagerData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EB90;
	}
	AntRef m_ReadinessEnumAsset; // 0x20
	AntRef m_AwarenessEnumAsset; // 0x34
	PamCustomAnimationBinding m_CustomAnimBinding; // 0x48
	PamAttentionBinding m_AttentionState; // 0x5c
	PamReadinessEnumBinding m_ReadyBinding; // 0xc0
	PamReadinessEnumBinding m_RelaxedBinding; // 0xc4
	PamAwarenessEnumBinding m_UnawareBinding; // 0xc8
	PamAwarenessEnumBinding m_AwareBinding; // 0xcc
	PamAimBinding m_AimBinding; // 0xd0
}; // size = 0x120

#endif // FBGEN_PamAIAnimationManagerData_H
