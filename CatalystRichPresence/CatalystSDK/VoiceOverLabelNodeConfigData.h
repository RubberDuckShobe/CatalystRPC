//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverLabelNodeConfigData.h
// Created: Wed Mar 10 18:59:00 2021
//

#ifndef FBGEN_VoiceOverLabelNodeConfigData_H
#define FBGEN_VoiceOverLabelNodeConfigData_H

#include "Array.h"
#include "VoiceOverLabelSourceMode.h"
#include "VoiceOverLabelCompareMode.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverLabelNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4430;
	}
	Array<VoiceOverLabel*> m_WantedLabels; // 0x18
	Array<VoiceOverLabel*> m_UnwantedLabels; // 0x20
	VoiceOverLabelSourceMode m_SourceMode; // 0x28
	VoiceOverLabelCompareMode m_WantedCompareMode; // 0x2c
	VoiceOverLabelCompareMode m_UnwantedCompareMode; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_VoiceOverLabelNodeConfigData_H
