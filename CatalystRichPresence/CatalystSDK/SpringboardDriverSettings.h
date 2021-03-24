//
// Generated with FrostbiteGen by Chod
// File: SDK\SpringboardDriverSettings.h
// Created: Wed Mar 10 19:00:59 2021
//

#ifndef FBGEN_SpringboardDriverSettings_H
#define FBGEN_SpringboardDriverSettings_H

#include "AntRef.h"
#include "DataContainer.h"

class SpringboardDriverSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B530;
	}
	AntRef m_SpringboardDriverMetricsAsset; // 0x10
	float m_MinimumForwardSpeed; // 0x24
	float m_MaximumForwardSpeed; // 0x28
	float m_MinimumJumpHeight; // 0x2c
	float m_MaximumJumpHeight; // 0x30
	float m_MinimumSpeedScale; // 0x34
	float m_MaximumSpeedScale; // 0x38
	float m_UseLookDirAngleLimit; // 0x3c
	float m_AllowedJumpAssistDistance; // 0x40
	float m_JumpAssistPenalty; // 0x44
}; // size = 0x48

#endif // FBGEN_SpringboardDriverSettings_H
