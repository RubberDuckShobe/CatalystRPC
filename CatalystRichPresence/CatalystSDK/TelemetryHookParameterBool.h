//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterBool.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookParameterBool_H
#define FBGEN_TelemetryHookParameterBool_H

#include "TelemetryParameterType.h"
struct TelemetryHookParameterBool
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142895938;
	}
	TelemetryParameterType m_ParameterType; // 0x0
	unsigned char _0x4[0x4];
	const char* m_ParameterName; // 0x8
	bool m_Data; // 0x10
	unsigned char _0x11[0x7];
}; // size = 0x18

#endif // FBGEN_TelemetryHookParameterBool_H
