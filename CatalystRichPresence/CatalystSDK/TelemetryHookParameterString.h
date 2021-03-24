//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterString.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookParameterString_H
#define FBGEN_TelemetryHookParameterString_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterString
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895998;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	const char* m_Data; // 0x10
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterString_H
