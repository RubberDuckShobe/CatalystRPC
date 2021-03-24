//
// Generated with FrostbiteGen by Chod
// File: SDK\ConeOutputNodeConfigData.h
// Created: Wed Mar 10 19:07:34 2021
//

#ifndef FBGEN_ConeOutputNodeConfigData_H
#define FBGEN_ConeOutputNodeConfigData_H

#include "Vec3.h"
#include "AudioCurve.h"
#include "OutputNodeConfigData.h"

class ConeOutputNodeConfigData :
	public OutputNodeConfigData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8E20;
	}
	float m_OutsideGain; // 0x58
	float m_PanSize; // 0x5c
	float m_BleedMinDistance; // 0x60
	unsigned char _0x64[0xc];
	Vec3 m_Direction; // 0x70
	float m_BleedMaxDistance; // 0x80
	float m_HFDampingAngle; // 0x84
	AudioCurve m_ReverbAttenuationCurve; // 0x88
	float m_ReverbGain; // 0x98
	unsigned char _0x9c[0x4];
}; // size = 0xa0

#endif // FBGEN_ConeOutputNodeConfigData_H
