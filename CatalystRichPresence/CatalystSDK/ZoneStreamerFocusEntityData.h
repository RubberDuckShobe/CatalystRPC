//
// Generated with FrostbiteGen by Chod
// File: SDK\ZoneStreamerFocusEntityData.h
// Created: Wed Mar 10 18:58:41 2021
//

#ifndef FBGEN_ZoneStreamerFocusEntityData_H
#define FBGEN_ZoneStreamerFocusEntityData_H

#include "LinearTransform.h"
#include "ZoneStreamerLogicEntityData.h"

class ZoneStreamerFocusEntityData :
	public ZoneStreamerLogicEntityData // size = 0x20
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289FC00;
	}
	LinearTransform m_FocusPoint; // 0x20
	bool m_AutoEnabled; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_ZoneStreamerFocusEntityData_H
