//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverNodeConfigData.h
// Created: Wed Mar 10 18:58:58 2021
//

#ifndef FBGEN_VoiceOverNodeConfigData_H
#define FBGEN_VoiceOverNodeConfigData_H

#include "VoiceOverNode.h"
#include "DataContainer.h"

class VoiceOverNodeConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D5090;
	}
	VoiceOverNode* m_Node; // 0x10
}; // size = 0x18

#endif // FBGEN_VoiceOverNodeConfigData_H
