//
// Generated with FrostbiteGen by Chod
// File: SDK\PartComponentData.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_PartComponentData_H
#define FBGEN_PartComponentData_H

#include "Array.h"
#include "GameComponentData.h"

class PartComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142816B00;
	}
	Array<HealthStateData*> m_HealthStates; // 0x70
	Array<PartLinkData*> m_PartLinks; // 0x78
	bool m_IsSupported; // 0x80
	bool m_IsFragile; // 0x81
	bool m_AffectsBoundingBox; // 0x82
	bool m_IsNetworkable; // 0x83
	bool m_IsWindow; // 0x84
	bool m_AnimatePhysics; // 0x85
	unsigned char _0x86[0xa];
}; // size = 0x90

#endif // FBGEN_PartComponentData_H
