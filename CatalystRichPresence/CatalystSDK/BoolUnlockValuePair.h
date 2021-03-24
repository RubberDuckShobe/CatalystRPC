//
// Generated with FrostbiteGen by Chod
// File: SDK\BoolUnlockValuePair.h
// Created: Wed Mar 10 19:08:25 2021
//

#ifndef FBGEN_BoolUnlockValuePair_H
#define FBGEN_BoolUnlockValuePair_H

#include "UnlockValuePair.h"

class BoolUnlockValuePair :
	public UnlockValuePair // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E810;
	}
	bool m_DefaultValue; // 0x18
	bool m_UnlockedValue; // 0x19
	unsigned char _0x1a[0x6];
}; // size = 0x20

#endif // FBGEN_BoolUnlockValuePair_H
