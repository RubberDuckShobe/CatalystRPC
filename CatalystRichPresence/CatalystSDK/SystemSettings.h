//
// Generated with FrostbiteGen by Chod
// File: SDK\SystemSettings.h
// Created: Wed Mar 10 19:00:35 2021
//

#ifndef FBGEN_SystemSettings_H
#define FBGEN_SystemSettings_H

#include "GamePlatform.h"
#include "DataContainer.h"

class SystemSettings :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B2220;
	}
	const char* m_Name; // 0x10
	GamePlatform m_Platform; // 0x18
	unsigned char _0x1c[0x4];
}; // size = 0x20

#endif // FBGEN_SystemSettings_H
