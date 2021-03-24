//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMoveTrackerEventData.h
// Created: Wed Mar 10 19:04:21 2021
//

#ifndef FBGEN_PamMoveTrackerEventData_H
#define FBGEN_PamMoveTrackerEventData_H

#include "EventSpec.h"
struct PamMoveTrackerEventData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884A38;
	}
	int m_EnumValue; // 0x0
	EventSpec m_Event; // 0x4
	bool m_isStartEvent; // 0x8
	unsigned char _0x9[0x3];
}; // size = 0xc

#endif // FBGEN_PamMoveTrackerEventData_H
