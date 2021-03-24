//
// Generated with FrostbiteGen by Chod
// File: SDK\PamTelemetryEventEntityData.h
// Created: Wed Mar 10 19:03:43 2021
//

#ifndef FBGEN_PamTelemetryEventEntityData_H
#define FBGEN_PamTelemetryEventEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamTelemetryEventEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DD40;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_EventTransform; // 0x20
	const char* m_EventName; // 0x60
	float m_EventValue; // 0x68
	bool m_UseValue; // 0x6c
	bool m_UseTransform; // 0x6d
	unsigned char _0x6e[0x2];
}; // size = 0x70

#endif // FBGEN_PamTelemetryEventEntityData_H
