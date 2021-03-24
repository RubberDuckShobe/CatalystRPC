//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterInt.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookParameterInt_H
#define FBGEN_TelemetryHookParameterInt_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterInt
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428959D8;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	int m_Data; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterInt_H
