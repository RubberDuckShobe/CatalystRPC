//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverTriggerNode.h
// Created: Wed Mar 10 18:58:57 2021
//

#ifndef FBGEN_VoiceOverTriggerNode_H
#define FBGEN_VoiceOverTriggerNode_H

#include "Array.h"
#include "VoiceOverEvent.h"
#include "VoiceOverStructureNode.h"

class VoiceOverTriggerNode :
	public VoiceOverStructureNode // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3D70;
	}
	Array<VoiceOverTriggerParameter*> m_Parameters; // 0x18
	float m_Delay; // 0x20
	unsigned char _0x24[0x4];
	VoiceOverEvent* m_Event; // 0x28
}; // size = 0x30

#endif // FBGEN_VoiceOverTriggerNode_H
