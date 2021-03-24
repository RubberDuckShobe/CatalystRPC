//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverEvent.h
// Created: Wed Mar 10 18:59:03 2021
//

#ifndef FBGEN_VoiceOverEvent_H
#define FBGEN_VoiceOverEvent_H

#include "Array.h"
#include "VoiceOverLogicAsset.h"
#include "DataContainer.h"

class VoiceOverEvent :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D5150;
	}
	const char* m_Name; // 0x10
	unsigned int m_NameHash; // 0x18
	unsigned char _0x1c[0x4];
	Array<VoiceOverNamedValue*> m_Parameters; // 0x20
	VoiceOverLogicAsset* m_Owner; // 0x28
}; // size = 0x30

#endif // FBGEN_VoiceOverEvent_H
