//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIPlayerSelectEntityData.h
// Created: Wed Mar 10 19:03:25 2021
//

#ifndef FBGEN_PamUIPlayerSelectEntityData_H
#define FBGEN_PamUIPlayerSelectEntityData_H

#include "LocalPlayerId.h"
#include "EntityData.h"

class PamUIPlayerSelectEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014288A400;
	}
	LocalPlayerId m_Player; // 0x18
	int m_ActivationButton; // 0x1c
	int m_ActivationButton2; // 0x20
	int m_AccountPickerButton; // 0x24
	bool m_PairCurrentPlayer; // 0x28
	bool m_AllowAnyController; // 0x29
	unsigned char _0x2a[0x6];
}; // size = 0x30

#endif // FBGEN_PamUIPlayerSelectEntityData_H
