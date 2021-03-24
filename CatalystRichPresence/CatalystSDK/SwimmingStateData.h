//
// Generated with FrostbiteGen by Chod
// File: SDK\SwimmingStateData.h
// Created: Wed Mar 10 19:00:38 2021
//

#ifndef FBGEN_SwimmingStateData_H
#define FBGEN_SwimmingStateData_H

#include "CharacterStateData.h"

class SwimmingStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C1A0;
	}
	float m_BodyUnderWater; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_SwimmingStateData_H
