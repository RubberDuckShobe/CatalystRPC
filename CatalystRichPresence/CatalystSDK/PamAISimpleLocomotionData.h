//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAISimpleLocomotionData.h
// Created: Wed Mar 10 19:05:18 2021
//

#ifndef FBGEN_PamAISimpleLocomotionData_H
#define FBGEN_PamAISimpleLocomotionData_H

#include "LocoComponentData.h"

class PamAISimpleLocomotionData :
	public LocoComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287CD80;
	}
	float m_SpeedModifier; // 0x70
	unsigned char _0x74[0xc];
}; // size = 0x80

#endif // FBGEN_PamAISimpleLocomotionData_H
