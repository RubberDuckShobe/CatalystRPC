//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatUnlockValuePair.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FloatUnlockValuePair_H
#define FBGEN_FloatUnlockValuePair_H

#include "UnlockValuePair.h"

class FloatUnlockValuePair :
	public UnlockValuePair // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E8D0;
	}
	float m_DefaultValue; // 0x18
	float m_UnlockedValue; // 0x1c
}; // size = 0x20

#endif // FBGEN_FloatUnlockValuePair_H
