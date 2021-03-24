//
// Generated with FrostbiteGen by Chod
// File: SDK\ObjectOutputNodeConfigData.h
// Created: Wed Mar 10 19:05:31 2021
//

#ifndef FBGEN_ObjectOutputNodeConfigData_H
#define FBGEN_ObjectOutputNodeConfigData_H

#include "Vec3.h"
#include "AudioCurve.h"
#include "SoundBusPatchAsset.h"
#include "OutputNodeConfigData.h"

class ObjectOutputNodeConfigData :
	public OutputNodeConfigData // size = 0x58
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8DC0;
	}
	float m_OutsideGain; // 0x58
	float m_BleedMinDistance; // 0x5c
	float m_BleedMaxDistance; // 0x60
	unsigned char _0x64[0xc];
	Vec3 m_Direction; // 0x70
	float m_HFDampingAngle; // 0x80
	unsigned char _0x84[0x4];
	AudioCurve m_ReverbAttenuationCurve; // 0x88
	float m_ReverbGain; // 0x98
	unsigned char _0x9c[0x4];
	SoundBusPatchAsset* m_ObjectPatch; // 0xa0
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_ObjectOutputNodeConfigData_H
