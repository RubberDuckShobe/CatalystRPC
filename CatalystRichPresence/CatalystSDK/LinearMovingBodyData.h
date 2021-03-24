//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearMovingBodyData.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinearMovingBodyData_H
#define FBGEN_LinearMovingBodyData_H

#include "Vec3.h"
#include "EndPointData.h"
#include "MovingBodyData.h"

class LinearMovingBodyData :
	public MovingBodyData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C680;
	}
	unsigned char _0x18[0x8];
	Vec3 m_Axis; // 0x20
	EndPointData m_Start; // 0x30
	EndPointData m_End; // 0x44
	unsigned char _0x58[0x8];
}; // size = 0x60

#endif // FBGEN_LinearMovingBodyData_H
