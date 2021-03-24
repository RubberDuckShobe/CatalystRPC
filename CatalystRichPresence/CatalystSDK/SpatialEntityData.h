//
// Generated with FrostbiteGen by Chod
// File: SDK\SpatialEntityData.h
// Created: Wed Mar 10 19:01:06 2021
//

#ifndef FBGEN_SpatialEntityData_H
#define FBGEN_SpatialEntityData_H

#include "LinearTransform.h"
#include "EntityData.h"

class SpatialEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E78B0;
	}
	unsigned char _0x18[0x8];
	LinearTransform m_Transform; // 0x20
}; // size = 0x60

#endif // FBGEN_SpatialEntityData_H
