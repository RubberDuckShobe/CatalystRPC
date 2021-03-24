//
// Generated with FrostbiteGen by Chod
// File: SDK\AntAnimationHandlerData.h
// Created: Wed Mar 10 19:08:44 2021
//

#ifndef FBGEN_AntAnimationHandlerData_H
#define FBGEN_AntAnimationHandlerData_H

#include "AntAnimatableData.h"
#include "AntRef.h"
#include "LodBinding.h"
#include "AnimationControlBinding.h"
#include "Array.h"
struct AntAnimationHandlerData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815EC0;
	}
	AntAnimatableData m_Animatable; // 0x0
	AntRef m_RootController; // 0x70
	LodBinding m_LodBinding; // 0x84
	AnimationControlBinding m_AnimationControlBinding; // 0x110
	unsigned char _0x124[0x4];
	Array<int> m_JointOutputFieldHashes; // 0x128
	Array<int> m_JointEnabledFieldHashes; // 0x130
	bool m_ReportBackFromAnt; // 0x138
	bool m_EnableMasterSlaveCopy; // 0x139
	bool m_ForceServerAsSlave; // 0x13a
	bool m_IsProp; // 0x13b
	bool m_UseSceneOpForReset; // 0x13c
	unsigned char _0x13d[0x3];
}; // size = 0x140

#endif // FBGEN_AntAnimationHandlerData_H
