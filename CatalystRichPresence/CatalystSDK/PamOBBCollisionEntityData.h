//
// Generated with FrostbiteGen by Chod
// File: SDK\PamOBBCollisionEntityData.h
// Created: Wed Mar 10 19:04:18 2021
//

#ifndef FBGEN_PamOBBCollisionEntityData_H
#define FBGEN_PamOBBCollisionEntityData_H

#include "OBBCollisionEntityData.h"

class PamOBBCollisionEntityData :
	public OBBCollisionEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142881550;
	}
	bool m_CantStand; // 0x90
	bool m_CantClimb; // 0x91
	bool m_CantVault; // 0x92
	bool m_CantWallrun; // 0x93
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_PamOBBCollisionEntityData_H
