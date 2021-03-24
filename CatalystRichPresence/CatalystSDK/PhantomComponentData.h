//
// Generated with FrostbiteGen by Chod
// File: SDK\PhantomComponentData.h
// Created: Wed Mar 10 19:03:12 2021
//

#ifndef FBGEN_PhantomComponentData_H
#define FBGEN_PhantomComponentData_H

#include "Vec3.h"
#include "AntRef.h"
#include "GameComponentData.h"

class PhantomComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428168C0;
	}
	Vec3 m_BoxSize; // 0x70
	AntRef m_AsyncQueryPointerAsset; // 0x80
	AntRef m_EnableTrajectoryOverride; // 0x94
	AntRef m_TrajectoryOverride; // 0xa8
	unsigned char _0xbc[0x4];
}; // size = 0xc0

#endif // FBGEN_PhantomComponentData_H
