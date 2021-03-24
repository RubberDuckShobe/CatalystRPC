//
// Generated with FrostbiteGen by Chod
// File: SDK\MovingBodyData.h
// Created: Wed Mar 10 19:05:43 2021
//

#ifndef FBGEN_MovingBodyData_H
#define FBGEN_MovingBodyData_H

#include "DataContainer.h"

class MovingBodyData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C7A0;
	}
	float m_Mass; // 0x10
	float m_Inertia; // 0x14
}; // size = 0x18

#endif // FBGEN_MovingBodyData_H
