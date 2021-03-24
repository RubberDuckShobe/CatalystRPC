//
// Generated with FrostbiteGen by Chod
// File: SDK\FadeEntityData.h
// Created: Wed Mar 10 19:06:50 2021
//

#ifndef FBGEN_FadeEntityData_H
#define FBGEN_FadeEntityData_H

#include "LocalPlayerId.h"
#include "EntityData.h"

class FadeEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280B6F0;
	}
	float m_FadeTime; // 0x18
	float m_MaxWaitFadedWhileStreamingTime; // 0x1c
	LocalPlayerId m_LocalPlayerId; // 0x20
	bool m_FadeScreen; // 0x24
	bool m_FadeUI; // 0x25
	bool m_FadeAudio; // 0x26
	bool m_FadeMovie; // 0x27
	bool m_FadeRumble; // 0x28
	bool m_StartFaded; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_FadeEntityData_H
