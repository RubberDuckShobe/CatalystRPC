//
// Generated with FrostbiteGen by Chod
// File: SDK\BoneFakePhysicsData.h
// Created: Wed Mar 10 19:08:26 2021
//

#ifndef FBGEN_BoneFakePhysicsData_H
#define FBGEN_BoneFakePhysicsData_H

#include "FakePhysicsData.h"
#include "DataContainer.h"

class BoneFakePhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142818AE0;
	}
	FakePhysicsData* m_FakePhysics; // 0x10
	const char* m_BoneName; // 0x18
	int m_BoneId; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_BoneFakePhysicsData_H
