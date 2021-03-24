//
// Generated with FrostbiteGen by Chod
// File: SDK\TelemetryHookParameterTransform.h
// Created: Wed Mar 10 19:00:33 2021
//

#ifndef FBGEN_TelemetryHookParameterTransform_H
#define FBGEN_TelemetryHookParameterTransform_H

#include "LinearTransform.h"
#include "TelemetryParameterType.h"
struct TelemetryHookParameterTransform
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428958B8;
	}
	LinearTransform m_Data; // 0x0
	TelemetryParameterType m_ParameterType; // 0x40
	unsigned char _0x44[0x4];
	const char* m_ParameterName; // 0x48
}; // size = 0x50

#endif // FBGEN_TelemetryHookParameterTransform_H
