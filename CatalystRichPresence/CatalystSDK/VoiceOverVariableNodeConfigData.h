//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverVariableNodeConfigData.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverVariableNodeConfigData_H
#define FBGEN_VoiceOverVariableNodeConfigData_H

#include "VoiceOverNamedValue.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverVariableNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D42B0;
	}
	VoiceOverNamedValue* m_Source; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverVariableNodeConfigData_H
