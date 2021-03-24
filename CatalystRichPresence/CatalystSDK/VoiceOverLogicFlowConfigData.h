//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLogicFlowConfigData.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverLogicFlowConfigData_H
#define FBGEN_VoiceOverLogicFlowConfigData_H

#include "VoiceOverLogicAsset.h"
#include "VoiceOverGroup.h"
#include "VoiceOverLogicFlow.h"
#include "Array.h"
#include "DataContainer.h"

class VoiceOverLogicFlowConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3C50;
	}
	const char* m_Name; // 0x10
	VoiceOverLogicAsset* m_Owner; // 0x18
	VoiceOverGroup* m_Group; // 0x20
	Array<VoiceOverValue*> m_Locals; // 0x28
	Array<VoiceOverEventNodeConfigData*> m_Roots; // 0x30
	VoiceOverLogicFlow* m_Flow; // 0x38
	Array<VoiceOverNodeConfigData*> m_NodeConfigs; // 0x40
}; // size = 0x48

#endif // FBGEN_VoiceOverLogicFlowConfigData_H
