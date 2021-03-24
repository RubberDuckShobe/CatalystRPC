//
// Generated with FrostbiteGen by Chod
// File: SDK\OnlineProviderConfiguration.h
// Created: Wed Mar 10 19:05:27 2021
//

#ifndef FBGEN_OnlineProviderConfiguration_H
#define FBGEN_OnlineProviderConfiguration_H

#include "GamePlatform.h"
struct OnlineProviderConfiguration
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014284DC90;
	}
	GamePlatform m_Platform; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ServiceName; // 0x8
	const char* m_Client; // 0x10
	const char* m_SKU; // 0x18
	const char* m_Version; // 0x20
	unsigned int m_ServerSocketPacketSize; // 0x28
	bool m_IsServer; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_OnlineProviderConfiguration_H
