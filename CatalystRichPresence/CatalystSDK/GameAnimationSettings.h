//
// Generated with FrostbiteGen by Chod
// File: SDK\GameAnimationSettings.h
// Created: Wed Mar 10 19:06:41 2021
//

#ifndef FBGEN_GameAnimationSettings_H
#define FBGEN_GameAnimationSettings_H

#include "Array.h"
#include "SystemSettings.h"

class GameAnimationSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428107A0;
	}
	Array<const char*> m_AntOnClientOnlyGamemodes; // 0x20
	float m_TemporalLoddingFirstDeltaTime; // 0x28
	float m_TemporalLoddingSecondDeltaTime; // 0x2c
	float m_TemporalLoddingThirdDeltaTime; // 0x30
	float m_TemporalLoddingFourthDeltaTime; // 0x34
	float m_TemporalLoddingFifthDeltaTime; // 0x38
	float m_TemporalLoddingSixthDeltaTime; // 0x3c
	float m_TemporalLoddingFirstDistance; // 0x40
	float m_TemporalLoddingSecondDistance; // 0x44
	float m_TemporalLoddingThirdDistance; // 0x48
	float m_TemporalLoddingFourthDistance; // 0x4c
	float m_TemporalLoddingFifthDistance; // 0x50
	float m_TemporalLoddingSixthDistance; // 0x54
	float m_TemporalLoddingFarDistance; // 0x58
	bool m_ServerEnable; // 0x5c
	bool m_ClientEnable; // 0x5d
	bool m_UseRawGamepadInput; // 0x5e
	unsigned char _0x5f[0x1];
}; // size = 0x60

#endif // FBGEN_GameAnimationSettings_H
