//
// Generated with FrostbiteGen by Chod
// File: SDK\MathEntityInstruction.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MathEntityInstruction_H
#define FBGEN_MathEntityInstruction_H

#include "MathOpCode.h"
struct MathEntityInstruction
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E50F0;
	}
	MathOpCode m_Code; // 0x0
	int m_Result; // 0x4
	int m_Param1; // 0x8
	int m_Param2; // 0xc
}; // size = 0x10

#endif // FBGEN_MathEntityInstruction_H
