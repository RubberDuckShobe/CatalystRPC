//
// Generated with FrostbiteGen by Chod
// File: SDK\PersistenceRetentionPolicy.h
// Created: Wed Mar 10 19:03:13 2021
//

#ifndef FBGEN_PersistenceRetentionPolicy_H
#define FBGEN_PersistenceRetentionPolicy_H

#include "Asset.h"

class PersistenceRetentionPolicy :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142809D70;
	}
	int m_DailyHistoryCount; // 0x18
	int m_WeeklyHistoryCount; // 0x1c
	int m_MonthlyHistoryCount; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_PersistenceRetentionPolicy_H
