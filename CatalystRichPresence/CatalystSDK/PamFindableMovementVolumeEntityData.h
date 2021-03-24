//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFindableMovementVolumeEntityData.h
// Created: Wed Mar 10 19:04:39 2021
//

#ifndef FBGEN_PamFindableMovementVolumeEntityData_H
#define FBGEN_PamFindableMovementVolumeEntityData_H

#include "Vec3.h"
#include "GameComponentEntityData.h"

class PamFindableMovementVolumeEntityData :
	public GameComponentEntityData // size = 0x80
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884DA0;
	}
	Vec3 m_HalfExtents; // 0x80
	bool m_Enabled; // 0x90
	unsigned char _0x91[0xf];
}; // size = 0xa0

#endif // FBGEN_PamFindableMovementVolumeEntityData_H
