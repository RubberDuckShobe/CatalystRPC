//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionDataInt.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionDataInt_H
#define FBGEN_ProfileOptionDataInt_H

#include "ProfileOptionData.h"

class ProfileOptionDataInt :
	public ProfileOptionData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809890;
	}
	int m_Min; // 0x28
	int m_Max; // 0x2c
	int m_Value; // 0x30
	int m_Step; // 0x34
}; // size = 0x38

#endif // FBGEN_ProfileOptionDataInt_H
