//
// Generated with FrostbiteGen by Chod
// File: SDK\TransformVelocityData.h
// Created: Wed Mar 10 19:00:04 2021
//

#ifndef FBGEN_TransformVelocityData_H
#define FBGEN_TransformVelocityData_H

#include "Realm.h"
#include "LinearTransform.h"
#include "EntityData.h"

class TransformVelocityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFEB0;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	LinearTransform m_Position; // 0x20
	float m_DefaultSpeed; // 0x60
	unsigned char _0x64[0xc];
}; // size = 0x70

#endif // FBGEN_TransformVelocityData_H
