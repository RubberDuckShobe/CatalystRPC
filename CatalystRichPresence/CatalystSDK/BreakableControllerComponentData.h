//
// Generated with FrostbiteGen by Chod
// File: SDK\BreakableControllerComponentData.h
// Created: Wed Mar 10 19:08:24 2021
//

#ifndef FBGEN_BreakableControllerComponentData_H
#define FBGEN_BreakableControllerComponentData_H

#include "DestructionControllerComponentData.h"

class BreakableControllerComponentData :
	public DestructionControllerComponentData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D7140;
	}
	unsigned int m_BreakablePartCount; // 0x90
	unsigned int m_NetworkIdCount; // 0x94
	unsigned char _0x98[0x8];
}; // size = 0xa0

#endif // FBGEN_BreakableControllerComponentData_H
