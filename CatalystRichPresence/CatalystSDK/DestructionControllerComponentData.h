//
// Generated with FrostbiteGen by Chod
// File: SDK\DestructionControllerComponentData.h
// Created: Wed Mar 10 19:07:14 2021
//

#ifndef FBGEN_DestructionControllerComponentData_H
#define FBGEN_DestructionControllerComponentData_H

#include "GameComponentData.h"

class DestructionControllerComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D0A0;
	}
	float m_BreakingLength; // 0x70
	float m_FracturePosition; // 0x74
	float m_DestructionRadius; // 0x78
	float m_Delay; // 0x7c
	float m_RefineRadius; // 0x80
	bool m_StructuralIntegrityAnalyzerEnable; // 0x84
	unsigned char _0x85[0xb];
}; // size = 0x90

#endif // FBGEN_DestructionControllerComponentData_H
