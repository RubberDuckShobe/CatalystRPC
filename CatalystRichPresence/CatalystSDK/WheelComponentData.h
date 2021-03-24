//
// Generated with FrostbiteGen by Chod
// File: SDK\WheelComponentData.h
// Created: Wed Mar 10 18:58:46 2021
//

#ifndef FBGEN_WheelComponentData_H
#define FBGEN_WheelComponentData_H

#include "WheelConfigData.h"
#include "WheelPhysicsType.h"
#include "BoneComponentData.h"

class WheelComponentData :
	public BoneComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014281E570;
	}
	WheelConfigData* m_Config; // 0x70
	WheelPhysicsType m_PhysicsType; // 0x78
	float m_EffectClampVelocity; // 0x7c
	bool m_EnableWheelRaycasts; // 0x80
	unsigned char _0x81[0xf];
}; // size = 0x90

#endif // FBGEN_WheelComponentData_H
