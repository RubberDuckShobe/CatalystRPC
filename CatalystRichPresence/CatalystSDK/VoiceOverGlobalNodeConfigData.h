//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverGlobalNodeConfigData.h
// Created: Wed Mar 10 18:59:01 2021
//

#ifndef FBGEN_VoiceOverGlobalNodeConfigData_H
#define FBGEN_VoiceOverGlobalNodeConfigData_H

#include "VoiceOverNamedValue.h"
#include "VoiceOverObject.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverGlobalNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D46D0;
	}
	VoiceOverNamedValue* m_Field; // 0x18
	VoiceOverObject* m_Object; // 0x20
}; // size = 0x28

#endif // FBGEN_VoiceOverGlobalNodeConfigData_H
