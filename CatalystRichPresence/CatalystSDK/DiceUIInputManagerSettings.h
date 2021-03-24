//
// Generated with FrostbiteGen by Chod
// File: SDK\DiceUIInputManagerSettings.h
// Created: Wed Mar 10 19:07:11 2021
//

#ifndef FBGEN_DiceUIInputManagerSettings_H
#define FBGEN_DiceUIInputManagerSettings_H

#include "SystemSettings.h"

class DiceUIInputManagerSettings :
	public SystemSettings // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BF610;
	}
	float m_ScrollWheelDeadZone; // 0x20
	float m_DoubleClickTime; // 0x24
	bool m_AutomaticTypingMode; // 0x28
	bool m_TreatTouchAsMouse; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_DiceUIInputManagerSettings_H
