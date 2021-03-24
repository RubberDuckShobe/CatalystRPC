//
// Generated with FrostbiteGen by Chod
// File: SDK\HdrSetting.h
// Created: Wed Mar 10 19:06:35 2021
//

#ifndef FBGEN_HdrSetting_H
#define FBGEN_HdrSetting_H

#include "AudioCurve.h"
#include "DataContainer.h"

class HdrSetting :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427C8520;
	}
	float m_WindowMinTop; // 0x10
	float m_WindowMinBottom; // 0x14
	float m_WindowTopMinReleaseTime; // 0x18
	float m_WindowTopMaxReleaseTime; // 0x1c
	float m_WindowTopAttackTime; // 0x20
	float m_WindowBottomReleaseTime; // 0x24
	AudioCurve m_WindowTopReleaseTimeCurve; // 0x28
	float m_DischargeFactor; // 0x38
	float m_MaxAllowedEnergy; // 0x3c
	float m_WindowBottomAttackTime; // 0x40
	float m_WindowSize; // 0x44
	float m_CompressFactor; // 0x48
	float m_Headroom; // 0x4c
	float m_AllowedOvershoot; // 0x50
	unsigned char _0x54[0x4];
}; // size = 0x58

#endif // FBGEN_HdrSetting_H
