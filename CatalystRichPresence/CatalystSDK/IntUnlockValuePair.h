//
// Generated with FrostbiteGen by Chod
// File: SDK\IntUnlockValuePair.h
// Created: Wed Mar 10 19:06:27 2021
//

#ifndef FBGEN_IntUnlockValuePair_H
#define FBGEN_IntUnlockValuePair_H

#include "UnlockValuePair.h"

class IntUnlockValuePair :
	public UnlockValuePair // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E870;
	}
	int m_DefaultValue; // 0x18
	int m_UnlockedValue; // 0x1c
}; // size = 0x20

#endif // FBGEN_IntUnlockValuePair_H
