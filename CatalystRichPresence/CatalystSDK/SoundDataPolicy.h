//
// Generated with FrostbiteGen by Chod
// File: SDK\SoundDataPolicy.h
// Created: Wed Mar 10 19:01:17 2021
//

#ifndef FBGEN_SoundDataPolicy_H
#define FBGEN_SoundDataPolicy_H

#include "SoundDataRequestBehavior.h"
#include "SoundDataReleaseBehavior.h"
#include "SoundDataReadTarget.h"
#include "DataContainer.h"

class SoundDataPolicy :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427D08F0;
	}
	const char* m_Name; // 0x10
	SoundDataRequestBehavior m_RequestBehavior; // 0x18
	SoundDataReleaseBehavior m_ReleaseBehavior; // 0x1c
	SoundDataReadTarget m_PrimeTarget; // 0x20
	SoundDataReadTarget m_RequestTarget; // 0x24
}; // size = 0x28

#endif // FBGEN_SoundDataPolicy_H
