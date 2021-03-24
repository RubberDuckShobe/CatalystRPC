//
// Generated with FrostbiteGen by Chod
// File: SDK\AISensingManagerData.h
// Created: Wed Mar 10 19:08:57 2021
//

#ifndef FBGEN_AISensingManagerData_H
#define FBGEN_AISensingManagerData_H

#include "AISpecialization.h"
#include "AIManagerBaseData.h"

class AISensingManagerData :
	public AIManagerBaseData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B7BD0;
	}
	AISpecialization* m_AITypeNoSensingHack; // 0x20
	float m_DropSensedCharacterTime; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_AISensingManagerData_H
