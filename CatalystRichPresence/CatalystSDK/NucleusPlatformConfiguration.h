//
// Generated with FrostbiteGen by Chod
// File: SDK\NucleusPlatformConfiguration.h
// Created: Wed Mar 10 19:05:32 2021
//

#ifndef FBGEN_NucleusPlatformConfiguration_H
#define FBGEN_NucleusPlatformConfiguration_H

#include "GamePlatform.h"
struct NucleusPlatformConfiguration
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284A1B8;
	}
	GamePlatform m_Platform; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ClientId; // 0x8
	const char* m_ClientSecret; // 0x10
	const char* m_LoginScope; // 0x18
	const char* m_ClientRedirectUrl; // 0x20
}; // size = 0x28

#endif // FBGEN_NucleusPlatformConfiguration_H
