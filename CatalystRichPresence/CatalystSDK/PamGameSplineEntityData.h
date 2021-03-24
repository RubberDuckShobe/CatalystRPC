//
// Generated with FrostbiteGen by Chod
// File: SDK\PamGameSplineEntityData.h
// Created: Wed Mar 10 19:04:37 2021
//

#ifndef FBGEN_PamGameSplineEntityData_H
#define FBGEN_PamGameSplineEntityData_H

#include "GameSplineType.h"
#include "GameSplineEntityData.h"

class PamGameSplineEntityData :
	public GameSplineEntityData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DF20;
	}
	GameSplineType m_SplineType; // 0xb0
	float m_SplineRadius; // 0xb4
	float m_AssistSpeed; // 0xb8
	float m_ExitAngle0; // 0xbc
	float m_ExitAngle1; // 0xc0
	float m_ZiplineNoAttachDistance; // 0xc4
	float m_ZiplineForceDetachDistance; // 0xc8
	float m_SpeedMultiplier; // 0xcc
	bool m_ExitAtStart; // 0xd0
	bool m_ExitAtEnd; // 0xd1
	bool m_Enabled; // 0xd2
	unsigned char _0xd3[0xd];
}; // size = 0xe0

#endif // FBGEN_PamGameSplineEntityData_H
