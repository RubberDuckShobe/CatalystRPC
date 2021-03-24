//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionDataString.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionDataString_H
#define FBGEN_ProfileOptionDataString_H

#include "ProfileOptionData.h"

class ProfileOptionDataString :
	public ProfileOptionData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809710;
	}
	int m_MaxLength; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_Value; // 0x30
}; // size = 0x38

#endif // FBGEN_ProfileOptionDataString_H
