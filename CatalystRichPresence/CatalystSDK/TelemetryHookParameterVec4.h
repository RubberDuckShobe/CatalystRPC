//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterVec4.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryHookParameterVec4_H
#define FBGEN_TelemetryHookParameterVec4_H

#include "Vec4.h"
#include "TelemetryParameterType.h"
struct TelemetryHookParameterVec4
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428958D8;
	}
	Vec4 m_Data; // 0x0
	TelemetryParameterType m_ParameterType; // 0x10
	unsigned char _0x14[0x4];
	const char* m_ParameterName; // 0x18
}; // size = 0x20

#endif // FBGEN_TelemetryHookParameterVec4_H
