//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionDataFloat.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionDataFloat_H
#define FBGEN_ProfileOptionDataFloat_H

#include "ProfileOptionData.h"

class ProfileOptionDataFloat :
	public ProfileOptionData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809830;
	}
	float m_Min; // 0x28
	float m_Max; // 0x2c
	float m_Value; // 0x30
	float m_Step; // 0x34
}; // size = 0x38

#endif // FBGEN_ProfileOptionDataFloat_H
