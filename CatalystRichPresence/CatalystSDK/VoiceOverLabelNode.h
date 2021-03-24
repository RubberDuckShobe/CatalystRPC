//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLabelNode.h
// Created: Wed Mar 10 18:59:00 2021
//

#ifndef FBGEN_VoiceOverLabelNode_H
#define FBGEN_VoiceOverLabelNode_H

#include "VoiceOverValue.h"
#include "Array.h"
#include "VoiceOverLabelSourceMode.h"
#include "VoiceOverLabelCompareMode.h"
#include "VoiceOverExpressionNode.h"

class VoiceOverLabelNode :
	public VoiceOverExpressionNode // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4490;
	}
	Array<VoiceOverLabelSource*> m_Sources; // 0x10
	VoiceOverValue* m_False; // 0x18
	VoiceOverValue* m_True; // 0x20
	Array<VoiceOverLabel*> m_WantedLabels; // 0x28
	Array<VoiceOverLabel*> m_UnwantedLabels; // 0x30
	VoiceOverLabelSourceMode m_SourceMode; // 0x38
	VoiceOverLabelCompareMode m_WantedCompareMode; // 0x3c
	VoiceOverLabelCompareMode m_UnwantedCompareMode; // 0x40
	unsigned char _0x44[0x4];
}; // size = 0x48

#endif // FBGEN_VoiceOverLabelNode_H
