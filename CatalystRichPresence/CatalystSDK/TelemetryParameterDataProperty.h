//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryParameterDataProperty.h
// Created: Wed Mar 10 19:00:32 2021
//

#ifndef FBGEN_TelemetryParameterDataProperty_H
#define FBGEN_TelemetryParameterDataProperty_H

#include "TelemetryParameterType.h"
struct TelemetryParameterDataProperty
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428959F8;
	}
	const char* m_StatName; // 0x0
	TelemetryParameterType m_DataType; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_TelemetryParameterDataProperty_H
