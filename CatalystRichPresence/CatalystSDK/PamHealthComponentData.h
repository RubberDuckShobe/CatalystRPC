//
// Generated with FrostbiteGen by Chod
// File: SDK\PamHealthComponentData.h
// Created: Wed Mar 10 19:04:27 2021
//

#ifndef FBGEN_PamHealthComponentData_H
#define FBGEN_PamHealthComponentData_H

#include "Array.h"
#include "CharacterHealthComponentData.h"

class PamHealthComponentData :
	public CharacterHealthComponentData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B110;
	}
	Array<PamHealthComponentKilledEventData> m_OutputEvents; // 0x80
	bool m_IsImmortal; // 0x88
	unsigned char _0x89[0x7];
}; // size = 0x90

#endif // FBGEN_PamHealthComponentData_H
