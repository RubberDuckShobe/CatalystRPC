//
// Generated with FrostbiteGen by Chod
// File: SDK\FakePhysicsData.h
// Created: Wed Mar 10 19:06:49 2021
//

#ifndef FBGEN_FakePhysicsData_H
#define FBGEN_FakePhysicsData_H

#include "FakePhysicsData.h"
#include "DataContainer.h"

class FakePhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282D280;
	}
	FakePhysicsData* m_ChildFakePhysics; // 0x10
	float m_StartSpeed; // 0x18
	float m_GravityModifier; // 0x1c
	float m_StartDampening; // 0x20
	float m_EndDampening; // 0x24
	float m_MinSpeed; // 0x28
	float m_MaxSpeed; // 0x2c
	float m_Mass; // 0x30
	unsigned char _0x34[0x4];
}; // size = 0x38

#endif // FBGEN_FakePhysicsData_H
