//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterUint64.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryHookParameterUint64_H
#define FBGEN_TelemetryHookParameterUint64_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterUint64
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895958;
	}
	unsigned long m_Data; // 0x0
	TelemetryParameterType m_ParameterType; // 0x8
	unsigned char _0xc[0x4];
	const char* m_ParameterName; // 0x10
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterUint64_H
