//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAnimatableTimeScalingEntityData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAnimatableTimeScalingEntityData_H
#define FBGEN_PamAnimatableTimeScalingEntityData_H

#include "AntRef.h"
#include "EntityData.h"

class PamAnimatableTimeScalingEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287E040;
	}
	float m_TimeScale; // 0x18
	float m_AITimeScale; // 0x1c
	AntRef m_AITimeScaleRef; // 0x20
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_PamAnimatableTimeScalingEntityData_H
