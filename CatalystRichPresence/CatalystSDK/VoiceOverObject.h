//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverObject.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverObject_H
#define FBGEN_VoiceOverObject_H

#include "Array.h"
#include "VoiceOverNamedValue.h"

class VoiceOverObject :
	public VoiceOverNamedValue // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D51B0;
	}
	Array<VoiceOverNamedValue*> m_Properties; // 0x20
}; // size = 0x28

#endif // FBGEN_VoiceOverObject_H
