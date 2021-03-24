//
// Generated with FrostbiteGen by Chod
// File: SDK\CreatureMiscBinding.h
// Created: Wed Mar 10 19:07:29 2021
//

#ifndef FBGEN_CreatureMiscBinding_H
#define FBGEN_CreatureMiscBinding_H

#include "AntRef.h"
struct CreatureMiscBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BB940;
	}
	AntRef m_AntInLocoSystem; // 0x0
	AntRef m_AntInProxyController; // 0x14
	AntRef m_AntEnableSteering; // 0x28
	AntRef m_CurrentSpeed; // 0x3c
	AntRef m_PathSteering; // 0x50
	AntRef m_RelativeSteering; // 0x64
	AntRef m_RawDelatTraj; // 0x78
	AntRef m_TargetSpeedMode; // 0x8c
	AntRef m_TransitionSpeedMode; // 0xa0
	AntRef m_TriggerSpeedTransition; // 0xb4
	AntRef m_AccelDecelPhase; // 0xc8
}; // size = 0xdc

#endif // FBGEN_CreatureMiscBinding_H
