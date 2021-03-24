//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerQueryEntityData.h
// Created: Wed Mar 10 18:58:40 2021
//

#ifndef FBGEN_ZoneStreamerQueryEntityData_H
#define FBGEN_ZoneStreamerQueryEntityData_H

#include "LinearTransform.h"
#include "ZoneStreamerQueryEntityMode.h"
#include "ZoneStreamerLogicEntityData.h"

class ZoneStreamerQueryEntityData :
	public ZoneStreamerLogicEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FA20;
	}
	LinearTransform m_FocusPoint; // 0x20
	ZoneStreamerQueryEntityMode m_Mode; // 0x60
	bool m_IncludeNeighbours; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_ZoneStreamerQueryEntityData_H
