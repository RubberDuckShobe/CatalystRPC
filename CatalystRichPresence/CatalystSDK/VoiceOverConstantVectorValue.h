//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverConstantVectorValue.h
// Created: Wed Mar 10 18:59:08 2021
//

#ifndef FBGEN_VoiceOverConstantVectorValue_H
#define FBGEN_VoiceOverConstantVectorValue_H

#include "Vec4.h"
#include "VoiceOverConstantValue.h"

class VoiceOverConstantVectorValue :
	public VoiceOverConstantValue // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D49D0;
	}
	Vec4 m_Value; // 0x10
}; // size = 0x20

#endif // FBGEN_VoiceOverConstantVectorValue_H
