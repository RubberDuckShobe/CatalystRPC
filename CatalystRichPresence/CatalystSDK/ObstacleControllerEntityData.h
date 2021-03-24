//
// Generated with FrostbiteGen by Chod
// File: SDK\ObstacleControllerEntityData.h
// Created: Wed Mar 10 19:05:30 2021
//

#ifndef FBGEN_ObstacleControllerEntityData_H
#define FBGEN_ObstacleControllerEntityData_H

#include "ObstacleDat.h"
#include "EntityData.h"

class ObstacleControllerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828F50;
	}
	ObstacleDat* m_ObstacleData; // 0x18
	bool m_ActiveAtStart; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_ObstacleControllerEntityData_H
