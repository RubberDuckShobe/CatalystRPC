//
// Generated with FrostbiteGen by Chod
// File: SDK\DamageAreaCharacterPoseOverride.h
// Created: Wed Mar 10 19:07:20 2021
//

#ifndef FBGEN_DamageAreaCharacterPoseOverride_H
#define FBGEN_DamageAreaCharacterPoseOverride_H

#include "DamageAreaPoses.h"
#include "DataContainer.h"

class DamageAreaCharacterPoseOverride :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F6B0;
	}
	DamageAreaPoses m_Pose; // 0x10
	float m_DamagePerSecondOverride; // 0x14
}; // size = 0x18

#endif // FBGEN_DamageAreaCharacterPoseOverride_H
