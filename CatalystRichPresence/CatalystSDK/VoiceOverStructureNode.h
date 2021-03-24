//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverStructureNode.h
// Created: Wed Mar 10 18:58:57 2021
//

#ifndef FBGEN_VoiceOverStructureNode_H
#define FBGEN_VoiceOverStructureNode_H

#include "VoiceOverLogicFlowMode.h"
#include "VoiceOverNode.h"

class VoiceOverStructureNode :
	public VoiceOverNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4250;
	}
	VoiceOverLogicFlowMode m_FlowMode; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_VoiceOverStructureNode_H
