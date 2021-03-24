//
// Generated with FrostbiteGen by Chod
// File: SDK\WheelConfigMotorbikeData.h
// Created: Wed Mar 10 18:58:46 2021
//

#ifndef FBGEN_WheelConfigMotorbikeData_H
#define FBGEN_WheelConfigMotorbikeData_H

#include "WheelConfigData.h"

class WheelConfigMotorbikeData :
	public WheelConfigData // size = 0x190
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C8C0;
	}
	float m_MaxSpringForce; // 0x190
	float m_CollisionYawDampeningDuration; // 0x194
	float m_CollisionYawDampening; // 0x198
	unsigned char _0x19c[0x4];
}; // size = 0x1a0

#endif // FBGEN_WheelConfigMotorbikeData_H
