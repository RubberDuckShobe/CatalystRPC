//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverStructureConnection.h
// Created: Wed Mar 10 18:58:57 2021
//

#ifndef FBGEN_VoiceOverStructureConnection_H
#define FBGEN_VoiceOverStructureConnection_H

#include "VoiceOverStructureNode.h"
#include "VoiceOverRelationshipInput.h"
#include "DataContainer.h"

class VoiceOverStructureConnection :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4DF0;
	}
	VoiceOverStructureNode* m_TargetNode; // 0x10
	VoiceOverRelationshipInput* m_TargetInput; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverStructureConnection_H
