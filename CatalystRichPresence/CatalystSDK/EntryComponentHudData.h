//
// Generated with FrostbiteGen by Chod
// File: SDK\EntryComponentHudData.h
// Created: Wed Mar 10 19:06:56 2021
//

#ifndef FBGEN_EntryComponentHudData_H
#define FBGEN_EntryComponentHudData_H

#include "EntrySeatType.h"
struct EntryComponentHudData
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142815DA0;
	}
	int m_Index; // 0x0
	EntrySeatType m_SeatType; // 0x4
	bool m_Frustum; // 0x8
	bool m_Visible; // 0x9
	bool m_MaximizeMiniMapOnEntry; // 0xa
	unsigned char _0xb[0x1];
}; // size = 0xc

#endif // FBGEN_EntryComponentHudData_H
