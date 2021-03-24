//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverValueRedirect.h
// Created: Wed Mar 10 18:58:56 2021
//

#ifndef FBGEN_VoiceOverValueRedirect_H
#define FBGEN_VoiceOverValueRedirect_H

#include "VoiceOverValue.h"
#include "DataContainer.h"

class VoiceOverValueRedirect :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D5030;
	}
	VoiceOverValue* m_Source; // 0x10
	VoiceOverValue* m_Target; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverValueRedirect_H
