//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConstantNodeConfigData.h
// Created: Wed Mar 10 18:59:08 2021
//

#ifndef FBGEN_VoiceOverConstantNodeConfigData_H
#define FBGEN_VoiceOverConstantNodeConfigData_H

#include "VoiceOverConstantValue.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverConstantNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4910;
	}
	VoiceOverConstantValue* m_Source; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverConstantNodeConfigData_H
