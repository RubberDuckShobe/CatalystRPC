//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionDataBinary.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionDataBinary_H
#define FBGEN_ProfileOptionDataBinary_H

#include "ProfileOptionData.h"

class ProfileOptionDataBinary :
	public ProfileOptionData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428096B0;
	}
	int m_MaxLength; // 0x28
	unsigned char _0x2c[0x4];
}; // size = 0x30

#endif // FBGEN_ProfileOptionDataBinary_H
