//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAISniperFireManagerData.h
// Created: Wed Mar 10 19:05:17 2021
//

#ifndef FBGEN_PamAISniperFireManagerData_H
#define FBGEN_PamAISniperFireManagerData_H

#include "Array.h"
#include "PamAIFireManagerBaseData.h"

class PamAISniperFireManagerData :
	public PamAIFireManagerBaseData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E950;
	}
	Array<SniperMovePenalty> m_movePenalties; // 0x70
	float m_Damage; // 0x78
	float m_LoseTrackingTime; // 0x7c
	float m_TimeToCalibrate; // 0x80
	float m_AimOffsetDist; // 0x84
	float m_HomingInOnTargetSpeed; // 0x88
	float m_NeededAimCalibration; // 0x8c
	float m_RandomWalkSpeed; // 0x90
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_PamAISniperFireManagerData_H
