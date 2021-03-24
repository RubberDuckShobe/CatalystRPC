//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAIHeliFireManagerData.h
// Created: Wed Mar 10 19:05:19 2021
//

#ifndef FBGEN_PamAIHeliFireManagerData_H
#define FBGEN_PamAIHeliFireManagerData_H

#include "Array.h"
#include "PamAIBurstFireManagerData.h"

class PamAIHeliFireManagerData :
	public PamAIBurstFireManagerData // size = 0xb0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286E770;
	}
	Array<PamHeliWeapon*> m_HeliWeapons; // 0xb0
	bool m_InsertionWeaponEnabled; // 0xb8
	bool m_HoverWeaponEnabled; // 0xb9
	unsigned char _0xba[0x6];
}; // size = 0xc0

#endif // FBGEN_PamAIHeliFireManagerData_H
