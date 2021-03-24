//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProgressionFlag.h
// Created: Wed Mar 10 19:04:12 2021
//

#ifndef FBGEN_PamProgressionFlag_H
#define FBGEN_PamProgressionFlag_H

#include "DataContainer.h"

class PamProgressionFlag :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873960;
	}
	unsigned int m_NameHash; // 0x10
	unsigned int m_MissionIndex; // 0x14
	const char* m_Name; // 0x18
	int m_MaxValue; // 0x20
	int m_Cost; // 0x24
	int m_Reputation; // 0x28
	unsigned char _0x2c[0x4];
	const char* m_SyncStatName; // 0x30
	bool m_Clamp; // 0x38
	bool m_SyncToOnline; // 0x39
	unsigned char _0x3a[0x6];
}; // size = 0x40

#endif // FBGEN_PamProgressionFlag_H
