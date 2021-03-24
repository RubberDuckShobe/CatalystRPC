//
// Generated with FrostbiteGen by Chod
// File: SDK\TicketSetting.h
// Created: Wed Mar 10 19:00:19 2021
//

#ifndef FBGEN_TicketSetting_H
#define FBGEN_TicketSetting_H

#include "AIDifficultySetting.h"
struct TicketSetting
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B75B8;
	}
	int m_TicketType; // 0x0
	AIDifficultySetting m_Difficulty; // 0x4
	int m_MaxTicketCount; // 0x8
	float m_TicketCooldown; // 0xc
}; // size = 0x10

#endif // FBGEN_TicketSetting_H
