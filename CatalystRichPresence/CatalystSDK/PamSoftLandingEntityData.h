//
// Generated with FrostbiteGen by Chod
// File: SDK\PamSoftLandingEntityData.h
// Created: Wed Mar 10 19:03:48 2021
//

#ifndef FBGEN_PamSoftLandingEntityData_H
#define FBGEN_PamSoftLandingEntityData_H

#include "PamFindableMovementVolumeEntityData.h"

class PamSoftLandingEntityData :
	public PamFindableMovementVolumeEntityData // size = 0xa0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142884BC0;
	}
	float m_Radius; // 0xa0
	float m_Guidance; // 0xa4
	unsigned char _0xa8[0x8];
}; // size = 0xb0

#endif // FBGEN_PamSoftLandingEntityData_H
