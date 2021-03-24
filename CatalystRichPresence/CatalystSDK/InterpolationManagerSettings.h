//
// Generated with FrostbiteGen by Chod
// File: SDK\InterpolationManagerSettings.h
// Created: Wed Mar 10 19:06:26 2021
//

#ifndef FBGEN_InterpolationManagerSettings_H
#define FBGEN_InterpolationManagerSettings_H

#include "DataContainer.h"

class InterpolationManagerSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142826A00;
	}
	float m_TimeNudgePIDConstKPos; // 0x10
	float m_TimeNudgePIDConstKNeg; // 0x14
	float m_TimeNudgePIDConstTIPos; // 0x18
	float m_TimeNudgePIDConstTINeg; // 0x1c
	float m_TimeNudgePIDConstTDPos; // 0x20
	float m_TimeNudgePIDConstTDNeg; // 0x24
	float m_TimeNudgePIDLatencyTol; // 0x28
	float m_TimeNudgePIDPacketDeltaTimeTol; // 0x2c
	float m_TimeNudgePIDIncreaseDueToMissingPacket; // 0x30
	float m_TimeNudgePIDMaxChangePerSec; // 0x34
	bool m_EnableTimeNudgePIDRegulator; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_InterpolationManagerSettings_H
