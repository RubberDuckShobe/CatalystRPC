//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverEventNode.h
// Created: Wed Mar 10 18:59:02 2021
//

#ifndef FBGEN_VoiceOverEventNode_H
#define FBGEN_VoiceOverEventNode_H

#include "VoiceOverIntervalNode.h"
#include "Vec3.h"
#include "Array.h"
#include "VoiceOverEvent.h"
#include "VoiceOverStructureNode.h"

class VoiceOverEventNode :
	public VoiceOverStructureNode // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3E90;
	}
	VoiceOverIntervalNode* m_Interval; // 0x18
	Vec3 m_DebugColor; // 0x20
	Array<VoiceOverStructureNode*> m_Relationship; // 0x30
	Array<VoiceOverValueRedirect*> m_Redirects; // 0x38
	VoiceOverEvent* m_Event; // 0x40
	float m_DebugIntervalTime; // 0x48
	bool m_DebugEnabled; // 0x4c
	unsigned char _0x4d[0x3];
}; // size = 0x50

#endif // FBGEN_VoiceOverEventNode_H
