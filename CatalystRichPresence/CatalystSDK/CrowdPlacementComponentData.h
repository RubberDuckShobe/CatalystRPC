//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementComponentData.h
// Created: Wed Mar 10 19:07:25 2021
//

#ifndef FBGEN_CrowdPlacementComponentData_H
#define FBGEN_CrowdPlacementComponentData_H

#include "BaseSwarmComponentData.h"

class CrowdPlacementComponentData :
	public BaseSwarmComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894570;
	}
	unsigned int m_AttendancePercentage; // 0x70
	unsigned char _0x74[0xc];
}; // size = 0x80

#endif // FBGEN_CrowdPlacementComponentData_H
