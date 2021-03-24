//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverGlobalConstantValue.h
// Created: Wed Mar 10 18:59:02 2021
//

#ifndef FBGEN_VoiceOverGlobalConstantValue_H
#define FBGEN_VoiceOverGlobalConstantValue_H

#include "VoiceOverConstantValue.h"
#include "DataContainer.h"

class VoiceOverGlobalConstantValue :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4BB0;
	}
	const char* m_Name; // 0x10
	VoiceOverConstantValue* m_Source; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverGlobalConstantValue_H
