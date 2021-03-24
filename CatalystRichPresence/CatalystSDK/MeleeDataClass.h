//
// Generated with FrostbiteGen by Chod
// File: SDK\MeleeDataClass.h
// Created: Wed Mar 10 19:05:58 2021
//

#ifndef FBGEN_MeleeDataClass_H
#define FBGEN_MeleeDataClass_H

#include "PamCreatureMeleeBinding.h"
#include "AntRef.h"
#include "DataContainer.h"

class MeleeDataClass :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CC00;
	}
	PamCreatureMeleeBinding m_MeleeAntBinding; // 0x10
	PamCreatureMeleeBinding m_IdleAttackAntBinding; // 0x88
	AntRef m_MeleeContextDatabase; // 0x100
	AntRef m_IdleAttackContextDatabase; // 0x114
}; // size = 0x128

#endif // FBGEN_MeleeDataClass_H
