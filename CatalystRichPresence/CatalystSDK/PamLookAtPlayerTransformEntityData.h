//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLookAtPlayerTransformEntityData.h
// Created: Wed Mar 10 19:04:25 2021
//

#ifndef FBGEN_PamLookAtPlayerTransformEntityData_H
#define FBGEN_PamLookAtPlayerTransformEntityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class PamLookAtPlayerTransformEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D620;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_StartTransform; // 0x20
	float m_RotationSpeed; // 0x60
	float m_RotationSpeedWhenDontLookingAtPlayer; // 0x64
	bool m_Enabled; // 0x68
	bool m_LookAtPlayer; // 0x69
	unsigned char _0x6a[0x6];
}; // size = 0x70

#endif // FBGEN_PamLookAtPlayerTransformEntityData_H
