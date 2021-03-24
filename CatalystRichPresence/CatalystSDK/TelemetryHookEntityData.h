//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookEntityData.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookEntityData_H
#define FBGEN_TelemetryHookEntityData_H

#include "Realm.h"
#include "Array.h"
#include "EntityData.h"

class TelemetryHookEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895A20;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	const char* m_mod; // 0x20
	const char* m_grp; // 0x28
	const char* m_subgrp; // 0x30
	Array<TelemetryParameterDataProperty> m_Params; // 0x38
}; // size = 0x40

#endif // FBGEN_TelemetryHookEntityData_H
