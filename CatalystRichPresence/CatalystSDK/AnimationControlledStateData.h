//
// Generated with FrostbiteGen by Chod
// File: SDK\AnimationControlledStateData.h
// Created: Wed Mar 10 19:08:45 2021
//

#ifndef FBGEN_AnimationControlledStateData_H
#define FBGEN_AnimationControlledStateData_H

#include "CharacterStateData.h"

class AnimationControlledStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C440;
	}
	float m_UpNormalTolerance; // 0x18
	float m_CharacterSpringStrength; // 0x1c
}; // size = 0x20

#endif // FBGEN_AnimationControlledStateData_H
