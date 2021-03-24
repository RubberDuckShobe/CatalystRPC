//
// Generated with FrostbiteGen by Chod
// File: SDK\CannedAnimationBinding.h
// Created: Wed Mar 10 19:08:18 2021
//

#ifndef FBGEN_CannedAnimationBinding_H
#define FBGEN_CannedAnimationBinding_H

#include "AntRef.h"
struct CannedAnimationBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821A60;
	}
	AntRef m_LevelIndex; // 0x0
	AntRef m_ScenarioIndex; // 0x14
	AntRef m_ActorIndex; // 0x28
	AntRef m_PartIndex; // 0x3c
	AntRef m_TriggerCannedAnimation; // 0x50
	AntRef m_ExitCannedAnimation; // 0x64
	AntRef m_ExternalTime; // 0x78
	AntRef m_BlendValue; // 0x8c
	AntRef m_AdvanceScenario; // 0xa0
	AntRef m_EnteredLoop; // 0xb4
	AntRef m_AlmostFinished; // 0xc8
}; // size = 0xdc

#endif // FBGEN_CannedAnimationBinding_H
