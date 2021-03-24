//
// Generated with FrostbiteGen by Chod
// File: SDK\TrajectoryEntityData.h
// Created: Wed Mar 10 19:00:10 2021
//

#ifndef FBGEN_TrajectoryEntityData_H
#define FBGEN_TrajectoryEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class TrajectoryEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EA680;
	}
	unsigned char _0x18[0x8];
	LinearTransform m_OutTransform; // 0x20
}; // size = 0x60

#endif // FBGEN_TrajectoryEntityData_H
