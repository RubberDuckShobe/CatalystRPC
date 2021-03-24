//
// Generated with FrostbiteGen by Chod
// File: SDK\EntityVoiceOverInfo.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntityVoiceOverInfo_H
#define FBGEN_EntityVoiceOverInfo_H

#include "VoiceOverObject.h"
#include "Array.h"
#include "DataContainer.h"

class EntityVoiceOverInfo :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4F10;
	}
	VoiceOverObject* m_VoiceOverType; // 0x10
	Array<VoiceOverLabel*> m_Labels; // 0x18
}; // size = 0x20

#endif // FBGEN_EntityVoiceOverInfo_H
