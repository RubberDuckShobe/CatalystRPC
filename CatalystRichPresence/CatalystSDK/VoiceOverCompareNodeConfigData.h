//
// Generated with FrostbiteGen by Chod
// File: SDK\VoiceOverCompareNodeConfigData.h
// Created: Wed Mar 10 18:59:09 2021
//

#ifndef FBGEN_VoiceOverCompareNodeConfigData_H
#define FBGEN_VoiceOverCompareNodeConfigData_H

#include "VoiceOverCompareExpressionType.h"
#include "VoiceOverNodeConfigData.h"

class VoiceOverCompareNodeConfigData :
	public VoiceOverNodeConfigData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D4C70;
	}
	VoiceOverCompareExpressionType m_Operation; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_VoiceOverCompareNodeConfigData_H
