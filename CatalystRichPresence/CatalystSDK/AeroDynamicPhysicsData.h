//
// Generated with FrostbiteGen by Chod
// File: SDK\AeroDynamicPhysicsData.h
// Created: Wed Mar 10 19:08:48 2021
//

#ifndef FBGEN_AeroDynamicPhysicsData_H
#define FBGEN_AeroDynamicPhysicsData_H

#include "Vec3.h"
#include "DataContainer.h"

class AeroDynamicPhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282CE00;
	}
	Vec3 m_BodyDrag; // 0x10
	Vec3 m_BodyDragOffsetYZ; // 0x20
	Vec3 m_BodyDragOffsetXZ; // 0x30
	Vec3 m_BodyDragOffsetXY; // 0x40
}; // size = 0x50

#endif // FBGEN_AeroDynamicPhysicsData_H
