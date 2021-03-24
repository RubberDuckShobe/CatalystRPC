//
// Generated with FrostbiteGen by Chod
// File: SDK\AIWaypointExtraWaypointDataPtr.h
// Created: Wed Mar 10 19:08:52 2021
//

#ifndef FBGEN_AIWaypointExtraWaypointDataPtr_H
#define FBGEN_AIWaypointExtraWaypointDataPtr_H

#include "WaypointData.h"
struct AIWaypointExtraWaypointDataPtr
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B03B8;
	}
	WaypointData* m_WaypointDataPtr; // 0x0
	int m_SublevelID; // 0x8
	unsigned char _0xc[0x4];
}; // size = 0x10

#endif // FBGEN_AIWaypointExtraWaypointDataPtr_H
