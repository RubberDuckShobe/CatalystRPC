//
// Generated with FrostbiteGen by Chod
// File: SDK\AIStateScriptedData.h
// Created: Wed Mar 10 19:08:53 2021
//

#ifndef FBGEN_AIStateScriptedData_H
#define FBGEN_AIStateScriptedData_H

#include "DirectivePriority.h"
#include "AIStateData.h"

class AIStateScriptedData :
	public AIStateData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B8110;
	}
	DirectivePriority m_AcceptPriority; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AIStateScriptedData_H
