//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformSnapToGroundEntityData.h
// Created: Wed Mar 10 19:00:06 2021
//

#ifndef FBGEN_TransformSnapToGroundEntityData_H
#define FBGEN_TransformSnapToGroundEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformSnapToGroundEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A3D0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_In; // 0x20
	float m_DistanceToGround; // 0x60
	float m_RayCastLength; // 0x64
	float m_RayCastUpOffset; // 0x68
	bool m_AlignWithGroundNormal; // 0x6c
	bool m_IgnoreWater; // 0x6d
	unsigned char _0x6e[0x2];
}; // size = 0x70

#endif // FBGEN_TransformSnapToGroundEntityData_H
