//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIFireManagerBaseData.h
// Created: Wed Mar 10 19:05:20 2021
//

#ifndef FBGEN_PamAIFireManagerBaseData_H
#define FBGEN_PamAIFireManagerBaseData_H

#include "LinearTransform.h"
#include "GameplayBones.h"
#include "AIFireManagerData.h"

class PamAIFireManagerBaseData :
	public AIFireManagerData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EAD0;
	}
	LinearTransform m_WeaponTransform; // 0x20
	GameplayBones m_AimAtBone; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_PamAIFireManagerBaseData_H
