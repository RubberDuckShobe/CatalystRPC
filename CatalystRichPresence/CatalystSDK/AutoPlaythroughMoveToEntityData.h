//
// Generated with FrostbiteGen by Chod
// File: SDK\AutoPlaythroughMoveToEntityData.h
// Created: Wed Mar 10 19:08:34 2021
//

#ifndef FBGEN_AutoPlaythroughMoveToEntityData_H
#define FBGEN_AutoPlaythroughMoveToEntityData_H

#include "SpatialEntityData.h"

class AutoPlaythroughMoveToEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFC70;
	}
	bool m_DoAssertIfTooFarFromTarget; // 0x60
	unsigned char _0x61[0xf];
}; // size = 0x70

#endif // FBGEN_AutoPlaythroughMoveToEntityData_H
