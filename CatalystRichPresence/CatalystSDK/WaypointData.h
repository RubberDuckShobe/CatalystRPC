//
// Generated with FrostbiteGen by Chod
// File: SDK\WaypointData.h
// Created: Wed Mar 10 18:58:52 2021
//

#ifndef FBGEN_WaypointData_H
#define FBGEN_WaypointData_H

#include "DataContainer.h"

class WaypointData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821BA0;
	}
	int m_SchematicsNameHash; // 0x10
	unsigned int m_WaypointId; // 0x14
	bool m_UseClientsPosition; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_WaypointData_H
