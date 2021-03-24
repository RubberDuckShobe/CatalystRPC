//
// Generated with FrostbiteGen by Chod
// File: SDK\WingComponentData.h
// Created: Wed Mar 10 18:58:45 2021
//

#ifndef FBGEN_WingComponentData_H
#define FBGEN_WingComponentData_H

#include "WingPhysicsData.h"
#include "Array.h"
#include "BoneComponentData.h"

class WingComponentData :
	public BoneComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014289A500;
	}
	WingPhysicsData* m_Config; // 0x70
	Array<WingPhysicsData*> m_AlternateConfigs; // 0x78
	int m_UseAlternateConfig; // 0x80
	unsigned char _0x84[0xc];
}; // size = 0x90

#endif // FBGEN_WingComponentData_H
