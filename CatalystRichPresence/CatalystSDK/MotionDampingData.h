//
// Generated with FrostbiteGen by Chod
// File: SDK\MotionDampingData.h
// Created: Wed Mar 10 19:05:45 2021
//

#ifndef FBGEN_MotionDampingData_H
#define FBGEN_MotionDampingData_H

#include "Vec3.h"
#include "DataContainer.h"

class MotionDampingData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CC20;
	}
	float m_Pitch; // 0x10
	float m_Yaw; // 0x14
	unsigned char _0x18[0x8];
	Vec3 m_LinearModifier; // 0x20
	float m_Roll; // 0x30
	float m_Linear; // 0x34
	unsigned char _0x38[0x8];
}; // size = 0x40

#endif // FBGEN_MotionDampingData_H
