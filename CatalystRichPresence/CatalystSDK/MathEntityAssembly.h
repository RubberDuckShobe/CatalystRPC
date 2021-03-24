//
// Generated with FrostbiteGen by Chod
// File: SDK\MathEntityAssembly.h
// Created: Wed Mar 10 19:05:59 2021
//

#ifndef FBGEN_MathEntityAssembly_H
#define FBGEN_MathEntityAssembly_H

#include "Array.h"
struct MathEntityAssembly
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E4FF0;
	}
	Array<MathEntityFunctionCall> m_FunctionCalls; // 0x0
	Array<MathEntityInstruction> m_Instructions; // 0x8
}; // size = 0x10

#endif // FBGEN_MathEntityAssembly_H
