//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionData.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionData_H
#define FBGEN_ProfileOptionData_H

#include "ProfileOptionsType.h"
#include "Asset.h"

class ProfileOptionData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428098F0;
	}
	const char* m_UniqueId; // 0x18
	ProfileOptionsType m_Category; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_ProfileOptionData_H
