//
// Generated with FrostbiteGen by Chod
// File: SDK\PamStatsEventEntityData.h
// Created: Wed Mar 10 19:03:45 2021
//

#ifndef FBGEN_PamStatsEventEntityData_H
#define FBGEN_PamStatsEventEntityData_H

#include "EntityData.h"

class PamStatsEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142873B40;
	}
	const char* m_Code; // 0x18
	long m_LongValue; // 0x20
	float m_Value; // 0x28
	int m_IntValue; // 0x2c
	bool m_UseRawStatCode; // 0x30
	bool m_TriggerSave; // 0x31
	unsigned char _0x32[0x6];
}; // size = 0x38

#endif // FBGEN_PamStatsEventEntityData_H
