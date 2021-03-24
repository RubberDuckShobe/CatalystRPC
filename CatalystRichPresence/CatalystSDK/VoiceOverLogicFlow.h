//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLogicFlow.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverLogicFlow_H
#define FBGEN_VoiceOverLogicFlow_H

#include "VoiceOverLogicAsset.h"
#include "VoiceOverGroup.h"
#include "Array.h"
#include "DataContainer.h"

class VoiceOverLogicFlow :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3CB0;
	}
	const char* m_Name; // 0x10
	VoiceOverLogicAsset* m_Owner; // 0x18
	VoiceOverGroup* m_Group; // 0x20
	Array<VoiceOverValue*> m_Locals; // 0x28
	Array<VoiceOverEventNode*> m_Roots; // 0x30
}; // size = 0x38

#endif // FBGEN_VoiceOverLogicFlow_H
