//
// Generated with FrostbiteGen by Chod
// File: SDK\ProfileOptionDataEnum.h
// Created: Wed Mar 10 19:02:52 2021
//

#ifndef FBGEN_ProfileOptionDataEnum_H
#define FBGEN_ProfileOptionDataEnum_H

#include "Array.h"
#include "ProfileOptionData.h"

class ProfileOptionDataEnum :
	public ProfileOptionData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428097D0;
	}
	Array<ProfileOptionDataEnumItem> m_Items; // 0x28
}; // size = 0x30

#endif // FBGEN_ProfileOptionDataEnum_H
