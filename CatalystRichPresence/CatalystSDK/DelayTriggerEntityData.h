//
// Generated with FrostbiteGen by Chod
// File: SDK\DelayTriggerEntityData.h
// Created: Wed Mar 10 19:07:15 2021
//

#ifndef FBGEN_DelayTriggerEntityData_H
#define FBGEN_DelayTriggerEntityData_H

#include "TriggerEventEntityData.h"

class DelayTriggerEntityData :
	public TriggerEventEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281F7D0;
	}
	bool m_AutoTriggerEvent; // 0x70
	unsigned char _0x71[0xf];
}; // size = 0x80

#endif // FBGEN_DelayTriggerEntityData_H
