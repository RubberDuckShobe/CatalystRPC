//
// Generated with FrostbiteGen by Chod
// File: SDK\ClimbingStateData.h
// Created: Wed Mar 10 19:07:42 2021
//

#ifndef FBGEN_ClimbingStateData_H
#define FBGEN_ClimbingStateData_H

#include "CharacterStateData.h"

class ClimbingStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C260;
	}
	float m_LateralInputScale; // 0x18
	float m_DownAngleLimit; // 0x1c
	float m_DropOffAngle; // 0x20
	float m_AttractionVelocity; // 0x24
	float m_PushAwayVelocity; // 0x28
	float m_ClimbHeightOffset; // 0x2c
	float m_ClimbOffVerticalDistance; // 0x30
	float m_ClimbOffVerticalTime; // 0x34
	float m_ClimbOffHorizontalDistance; // 0x38
	float m_ClimbOffHorizontalTime; // 0x3c
}; // size = 0x40

#endif // FBGEN_ClimbingStateData_H
