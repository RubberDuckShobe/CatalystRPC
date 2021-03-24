//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverTriggerParameter.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverTriggerParameter_H
#define FBGEN_VoiceOverTriggerParameter_H

#include "VoiceOverValueConnection.h"
#include "VoiceOverNamedValue.h"
#include "DataContainer.h"

class VoiceOverTriggerParameter :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3DD0;
	}
	VoiceOverValueConnection m_Source; // 0x10
	VoiceOverNamedValue* m_EventParameter; // 0x20
}; // size = 0x28

#endif // FBGEN_VoiceOverTriggerParameter_H
