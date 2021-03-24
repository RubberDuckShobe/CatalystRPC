//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPathfindingTestEntityData.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPathfindingTestEntityData_H
#define FBGEN_PamPathfindingTestEntityData_H

#include "LinearTransform.h"
#include "SpatialEntityData.h"

class PamPathfindingTestEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286EE30;
	}
	LinearTransform m_Target; // 0x60
	float m_Radius; // 0xa0
	unsigned char _0xa4[0xc];
}; // size = 0xb0

#endif // FBGEN_PamPathfindingTestEntityData_H
