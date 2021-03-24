//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterUint.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryHookParameterUint_H
#define FBGEN_TelemetryHookParameterUint_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterUint
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895978;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	unsigned int m_Data; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterUint_H
