//
// Generated with FrostbiteGen by Chod
// File: SDK\WaypointsShapeData.h
// Created: Wed Mar 10 18:58:52 2021
//

#ifndef FBGEN_WaypointsShapeData_H
#define FBGEN_WaypointsShapeData_H

#include "Array.h"
#include "VectorShapeData.h"

class WaypointsShapeData :
	public VectorShapeData // size = 0x28
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821B40;
	}
	Array<WaypointData*> m_Waypoints; // 0x28
}; // size = 0x30

#endif // FBGEN_WaypointsShapeData_H
