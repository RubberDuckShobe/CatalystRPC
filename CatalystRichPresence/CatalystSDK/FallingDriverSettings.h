//
// Generated with FrostbiteGen by Chod
// File: SDK\FallingDriverSettings.h
// Created: Wed Mar 10 19:06:48 2021
//

#ifndef FBGEN_FallingDriverSettings_H
#define FBGEN_FallingDriverSettings_H

#include "AntRef.h"
#include "DataContainer.h"

class FallingDriverSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B590;
	}
	AntRef m_FallDriverMetricsAsset; // 0x10
	float m_AllowedJumpAssistDistance; // 0x24
	float m_ForwardSpeed; // 0x28
	float m_JumpHeight; // 0x2c
	float m_UseLookDirAngleLimit; // 0x30
	float m_JumpAssistPenalty; // 0x34
}; // size = 0x38

#endif // FBGEN_FallingDriverSettings_H
