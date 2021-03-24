//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterFloat.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookParameterFloat_H
#define FBGEN_TelemetryHookParameterFloat_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterFloat
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428959B8;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	float m_Data; // 0x10
	unsigned char _0x14[0x4];
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterFloat_H
