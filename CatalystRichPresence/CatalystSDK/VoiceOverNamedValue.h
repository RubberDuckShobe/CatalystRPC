//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverNamedValue.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverNamedValue_H
#define FBGEN_VoiceOverNamedValue_H

#include "VoiceOverValueType.h"
#include "VoiceOverValue.h"

class VoiceOverNamedValue :
	public VoiceOverValue // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D5210;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	VoiceOverValueType m_ValueType; // 0x1c
}; // size = 0x20

#endif // FBGEN_VoiceOverNamedValue_H
