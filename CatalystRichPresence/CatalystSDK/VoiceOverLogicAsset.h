//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLogicAsset.h
// Created: Wed Mar 10 18:58:59 2021
//

#ifndef FBGEN_VoiceOverLogicAsset_H
#define FBGEN_VoiceOverLogicAsset_H

#include "Array.h"
#include "VoiceOverSystemAsset.h"
#include "Asset.h"

class VoiceOverLogicAsset :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D3B90;
	}
	Array<VoiceOverEvent*> m_Events; // 0x18
	Array<VoiceOverGroup*> m_Groups; // 0x20
	Array<VoiceOverLogicFlow*> m_Flows; // 0x28
	Array<VoiceOverLogicFlowConfigData*> m_FlowConfigs; // 0x30
	VoiceOverSystemAsset* m_System; // 0x38
}; // size = 0x40

#endif // FBGEN_VoiceOverLogicAsset_H
