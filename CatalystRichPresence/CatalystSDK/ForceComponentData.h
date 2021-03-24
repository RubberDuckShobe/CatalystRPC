//
// Generated with FrostbiteGen by Chod
// File: SDK\ForceComponentData.h
// Created: Wed Mar 10 19:06:43 2021
//

#ifndef FBGEN_ForceComponentData_H
#define FBGEN_ForceComponentData_H

#include "WindPhysicsActionData.h"
#include "ComponentData.h"

class ForceComponentData :
	public ComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282F9B0;
	}
	WindPhysicsActionData* m_WindActionData; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_ForceComponentData_H
