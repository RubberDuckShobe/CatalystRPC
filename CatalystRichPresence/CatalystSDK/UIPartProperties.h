//
// Generated with FrostbiteGen by Chod
// File: SDK\UIPartProperties.h
// Created: Wed Mar 10 18:59:50 2021
//

#ifndef FBGEN_UIPartProperties_H
#define FBGEN_UIPartProperties_H

#include "UIPartIdentifier.h"
struct UIPartProperties
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F898;
	}
	UIPartIdentifier m_Identifier; // 0x0
	float m_Range; // 0x4
	float m_Frequency; // 0x8
	bool m_CompensateFreelook; // 0xc
	unsigned char _0xd[0x3];
}; // size = 0x10

#endif // FBGEN_UIPartProperties_H
