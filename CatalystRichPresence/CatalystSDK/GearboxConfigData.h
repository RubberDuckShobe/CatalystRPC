//
// Generated with FrostbiteGen by Chod
// File: SDK\GearboxConfigData.h
// Created: Wed Mar 10 19:06:38 2021
//

#ifndef FBGEN_GearboxConfigData_H
#define FBGEN_GearboxConfigData_H

#include "Array.h"
#include "DataContainer.h"

class GearboxConfigData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CB60;
	}
	Array<float> m_ForwardGearRatios; // 0x10
	Array<float> m_ForwardGearSpeeds; // 0x18
	Array<float> m_ReverseGearRatios; // 0x20
	Array<float> m_ReverseGearSpeeds; // 0x28
	int m_GearboxType; // 0x30
	int m_GearboxMode; // 0x34
	float m_GearChangeTime; // 0x38
	float m_GearDownSpeedFactor; // 0x3c
	float m_OppositeDirGearChangeMaxSpeed; // 0x40
	float m_OppositeDirGearChangeTime; // 0x44
	float m_ClutchSpeedFactor; // 0x48
	float m_TransmissionEfficiency; // 0x4c
	bool m_UseAutoClutch; // 0x50
	bool m_UseClassicGearBoxAutoClutch; // 0x51
	bool m_UseNeutralGear; // 0x52
	unsigned char _0x53[0x5];
}; // size = 0x58

#endif // FBGEN_GearboxConfigData_H
