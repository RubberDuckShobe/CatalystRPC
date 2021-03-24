//
// Generated with FrostbiteGen by Chod
// File: SDK\TestCaseEntityData.h
// Created: Wed Mar 10 19:00:24 2021
//

#ifndef FBGEN_TestCaseEntityData_H
#define FBGEN_TestCaseEntityData_H

#include "Realm.h"
#include "EntityData.h"

class TestCaseEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142820370;
	}
	Realm m_Realm; // 0x18
	float m_TimeOut; // 0x1c
	const char* m_TestGroup; // 0x20
	const char* m_Description; // 0x28
	const char* m_TestCaseName; // 0x30
	float m_CleanupTimeout; // 0x38
	bool m_Enabled; // 0x3c
	bool m_Stable; // 0x3d
	unsigned char _0x3e[0x2];
}; // size = 0x40

#endif // FBGEN_TestCaseEntityData_H
