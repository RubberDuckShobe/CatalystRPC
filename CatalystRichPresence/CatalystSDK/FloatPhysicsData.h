//
// Generated with FrostbiteGen by Chod
// File: SDK\FloatPhysicsData.h
// Created: Wed Mar 10 19:06:45 2021
//

#ifndef FBGEN_FloatPhysicsData_H
#define FBGEN_FloatPhysicsData_H

#include "DataContainer.h"

class FloatPhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EC90;
	}
	float m_Density; // 0x10
	float m_FilledDensity; // 0x14
}; // size = 0x18

#endif // FBGEN_FloatPhysicsData_H
