//
// Generated with FrostbiteGen by Chod
// File: SDK\ParachuteStateData.h
// Created: Wed Mar 10 19:03:19 2021
//

#ifndef FBGEN_ParachuteStateData_H
#define FBGEN_ParachuteStateData_H

#include "CharacterStateData.h"

class ParachuteStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C140;
	}
	float m_DeployTime; // 0x18
	float m_TerminalVelocity; // 0x1c
	float m_ForwardDragCoefficient; // 0x20
	float m_AngleOfAttack; // 0x24
	float m_BankOffset; // 0x28
	float m_ThrottleOffset; // 0x2c
	float m_BrakeOffset; // 0x30
	float m_MaxRollVelocity; // 0x34
	float m_MaxPitchVelocity; // 0x38
	float m_MaxYawVelocity; // 0x3c
}; // size = 0x40

#endif // FBGEN_ParachuteStateData_H
