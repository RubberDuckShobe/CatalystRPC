//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterVec2.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryHookParameterVec2_H
#define FBGEN_TelemetryHookParameterVec2_H

#include "TelemetryParameterType.h"
#include "Vec2.h"
struct TelemetryHookParameterVec2
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895918;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	Vec2 m_Data; // 0x10
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterVec2_H
