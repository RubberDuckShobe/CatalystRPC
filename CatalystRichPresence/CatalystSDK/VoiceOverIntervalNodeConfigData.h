//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverIntervalNodeConfigData.h
// Created: Wed Mar 10 18:59:00 2021
//

#ifndef FBGEN_VoiceOverIntervalNodeConfigData_H
#define FBGEN_VoiceOverIntervalNodeConfigData_H

#include "VoiceOverInterval.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverIntervalNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4550;
	}
	VoiceOverInterval* m_Interval; // 0x18
}; // size = 0x20

#endif // FBGEN_VoiceOverIntervalNodeConfigData_H
