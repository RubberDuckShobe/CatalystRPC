//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterVec3.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryHookParameterVec3_H
#define FBGEN_TelemetryHookParameterVec3_H

#include "Vec3.h"
#include "TelemetryParameterType.h"
struct TelemetryHookParameterVec3
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428958F8;
	}
	Vec3 m_Data; // 0x0
	TelemetryParameterType m_ParameterType; // 0x10
	unsigned char _0x14[0x4];
	const char* m_ParameterName; // 0x18
}; // size = 0x20

#endif // FBGEN_TelemetryHookParameterVec3_H
