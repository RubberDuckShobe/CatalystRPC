//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSphereCollisionEntityData.h
// Created: Wed Mar 10 19:03:47 2021
//

#ifndef FBGEN_PamSphereCollisionEntityData_H
#define FBGEN_PamSphereCollisionEntityData_H

#include "SphereCollisionEntityData.h"

class PamSphereCollisionEntityData :
	public SphereCollisionEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428815B0;
	}
	bool m_CantStand; // 0x90
	bool m_CantClimb; // 0x91
	bool m_CantVault; // 0x92
	bool m_CantWallrun; // 0x93
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_PamSphereCollisionEntityData_H
