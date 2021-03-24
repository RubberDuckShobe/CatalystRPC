//
// Generated with FrostbiteGen by Chod
// File: SDK\TriggerEntityData.h
// Created: Wed Mar 10 19:00:04 2021
//

#ifndef FBGEN_TriggerEntityData_H
#define FBGEN_TriggerEntityData_H

#include "SpatialEntityData.h"

class TriggerEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281FA10;
	}
	float m_Delay; // 0x60
	bool m_RunOnce; // 0x64
	bool m_Enabled; // 0x65
	unsigned char _0x66[0xa];
}; // size = 0x70

#endif // FBGEN_TriggerEntityData_H
