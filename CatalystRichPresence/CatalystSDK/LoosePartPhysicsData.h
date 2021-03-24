//
// Generated with FrostbiteGen by Chod
// File: SDK\LoosePartPhysicsData.h
// Created: Wed Mar 10 19:06:05 2021
//

#ifndef FBGEN_LoosePartPhysicsData_H
#define FBGEN_LoosePartPhysicsData_H

#include "FakePhysicsData.h"
#include "DataContainer.h"

class LoosePartPhysicsData :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C860;
	}
	FakePhysicsData* m_FakePhysics; // 0x10
}; // size = 0x18

#endif // FBGEN_LoosePartPhysicsData_H
