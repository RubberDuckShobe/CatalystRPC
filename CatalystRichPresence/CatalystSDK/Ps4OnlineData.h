//
// Generated with FrostbiteGen by Chod
// File: SDK\Ps4OnlineData.h
// Created: Wed Mar 10 19:02:47 2021
//

#ifndef FBGEN_Ps4OnlineData_H
#define FBGEN_Ps4OnlineData_H

#include "Ps4OnlineTitleData.h"
#include "Array.h"
#include "OnlinePlatformData.h"

class Ps4OnlineData :
	public OnlinePlatformData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284E430;
	}
	Ps4OnlineTitleData m_DefaultTitleData; // 0x18
	Array<Ps4OnlineTitleData> m_TitleData; // 0x28
}; // size = 0x30

#endif // FBGEN_Ps4OnlineData_H
