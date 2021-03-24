//
// Generated with FrostbiteGen by Chod
// File: SDK\CameraLeapData.h
// Created: Wed Mar 10 19:08:20 2021
//

#ifndef FBGEN_CameraLeapData_H
#define FBGEN_CameraLeapData_H

#include "LinearTransform.h"
struct CameraLeapData
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428160A0;
	}
	LinearTransform m_Transform; // 0x0
	float m_Time; // 0x40
	float m_FovModifier; // 0x44
	unsigned char _0x48[0x8];
}; // size = 0x50

#endif // FBGEN_CameraLeapData_H
