//
// Generated with FrostbiteGen by Chod
// File: SDK\InAirStateData.h
// Created: Wed Mar 10 19:06:31 2021
//

#ifndef FBGEN_InAirStateData_H
#define FBGEN_InAirStateData_H

#include "CharacterStateData.h"

class InAirStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C320;
	}
	float m_FreeFallVelocity; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_InAirStateData_H
