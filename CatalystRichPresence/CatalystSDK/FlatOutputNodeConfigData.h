//
// Generated with FrostbiteGen by Chod
// File: SDK\FlatOutputNodeConfigData.h
// Created: Wed Mar 10 19:06:46 2021
//

#ifndef FBGEN_FlatOutputNodeConfigData_H
#define FBGEN_FlatOutputNodeConfigData_H

#include "AudioCurve.h"
#include "OutputNodeConfigData.h"

class FlatOutputNodeConfigData :
	public OutputNodeConfigData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8E80;
	}
	float m_WorldAngle; // 0x58
	float m_Angle; // 0x5c
	AudioCurve m_ReverbAttenuationCurve; // 0x60
	float m_ReverbGain; // 0x70
	bool m_IsWorldAligned; // 0x74
	unsigned char _0x75[0x3];
}; // size = 0x78

#endif // FBGEN_FlatOutputNodeConfigData_H
