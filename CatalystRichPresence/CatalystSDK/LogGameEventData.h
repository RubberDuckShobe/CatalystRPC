//
// Generated with FrostbiteGen by Chod
// File: SDK\LogGameEventData.h
// Created: Wed Mar 10 19:06:07 2021
//

#ifndef FBGEN_LogGameEventData_H
#define FBGEN_LogGameEventData_H

#include "EntityData.h"

class LogGameEventData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFE50;
	}
	const char* m_EventCategory; // 0x18
	const char* m_EventName; // 0x20
	int m_IntResult; // 0x28
	float m_FloatResult; // 0x2c
	const char* m_StringResult; // 0x30
	bool m_LogToTelemetry; // 0x38
	unsigned char _0x39[0x7];
}; // size = 0x40

#endif // FBGEN_LogGameEventData_H
