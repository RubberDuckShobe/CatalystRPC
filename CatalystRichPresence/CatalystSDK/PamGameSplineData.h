//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGameSplineData.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamGameSplineData_H
#define FBGEN_PamGameSplineData_H

#include "GameSplineType.h"
#include "GameSplineData.h"

class PamGameSplineData :
	public GameSplineData // size = 0x40
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142872C40;
	}
	GameSplineType m_SplineType; // 0x40
	float m_SplineRadius; // 0x44
	float m_AssistSpeed; // 0x48
	float m_ExitAngle0; // 0x4c
	float m_ExitAngle1; // 0x50
	float m_ZiplineNoAttachDistance; // 0x54
	float m_ZiplineForceDetachDistance; // 0x58
	float m_SpeedMultiplier; // 0x5c
	bool m_Enabled; // 0x60
	bool m_ExitAtStart; // 0x61
	bool m_ExitAtEnd; // 0x62
	unsigned char _0x63[0x5];
}; // size = 0x68

#endif // FBGEN_PamGameSplineData_H
