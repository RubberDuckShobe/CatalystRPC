//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverArithmeticNodeConfigData.h
// Created: Wed Mar 10 18:59:10 2021
//

#ifndef FBGEN_VoiceOverArithmeticNodeConfigData_H
#define FBGEN_VoiceOverArithmeticNodeConfigData_H

#include "VoiceOverArithmeticExpressionType.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverArithmeticNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4D30;
	}
	VoiceOverArithmeticExpressionType m_Operation; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverArithmeticNodeConfigData_H
