//
// Generated with FrostbiteGen by Chod
// File: SDK\TurnEffectData.h
// Created: Wed Mar 10 19:00:03 2021
//

#ifndef FBGEN_TurnEffectData_H
#define FBGEN_TurnEffectData_H

struct TurnEffectData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815E40;
	}
	float m_MaxRollAngle; // 0x0
	float m_MaxPitchAngle; // 0x4
	float m_YawVelocityThreshhold; // 0x8
	float m_VelocityThreshhold; // 0xc
	float m_SafeTime; // 0x10
	float m_BeginTime; // 0x14
	float m_HoldTime; // 0x18
	float m_EndTime; // 0x1c
}; // size = 0x20

#endif // FBGEN_TurnEffectData_H
