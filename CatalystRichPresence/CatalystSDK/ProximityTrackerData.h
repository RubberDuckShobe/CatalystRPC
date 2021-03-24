//
// Generated with FrostbiteGen by Chod
// File: SDK\ProximityTrackerData.h
// Created: Wed Mar 10 19:02:48 2021
//

#ifndef FBGEN_ProximityTrackerData_H
#define FBGEN_ProximityTrackerData_H

#include "Vec3.h"
#include "DataContainer.h"

class ProximityTrackerData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F2F0;
	}
	unsigned int m_CollisionLayer; // 0x10
	unsigned char _0x14[0xc];
	Vec3 m_HalfExtents; // 0x20
}; // size = 0x30

#endif // FBGEN_ProximityTrackerData_H
