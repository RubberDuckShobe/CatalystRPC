//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverInfoNodeConfigData.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverInfoNodeConfigData_H
#define FBGEN_VoiceOverInfoNodeConfigData_H

#include "VoiceOverNamedValue.h"
#include "VoiceOverObject.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverInfoNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4610;
	}
	VoiceOverNamedValue* m_Field; // 0x18
	VoiceOverObject* m_ExpectedType; // 0x20
}; // size = 0x28

#endif // FBGEN_VoiceOverInfoNodeConfigData_H
