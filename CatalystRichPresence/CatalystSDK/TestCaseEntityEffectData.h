//
// Generated with FrostbiteGen by Chod
// File: SDK\TestCaseEntityEffectData.h
// Created: Wed Mar 10 19:00:24 2021
//

#ifndef FBGEN_TestCaseEntityEffectData_H
#define FBGEN_TestCaseEntityEffectData_H

#include "Realm.h"
#include "EntityData.h"

class TestCaseEntityEffectData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428202B0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_FileName; // 0x20
	unsigned int m_NumSimulationStep; // 0x28
	bool m_FilePathIsFromDataRoot; // 0x2c
	bool m_AutoTestScreenShotMode; // 0x2d
	unsigned char _0x2e[0x2];
}; // size = 0x30

#endif // FBGEN_TestCaseEntityEffectData_H
