//
// Generated with FrostbiteGen by Chod
// File: SDK\SpatialReferenceObjectData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpatialReferenceObjectData_H
#define FBGEN_SpatialReferenceObjectData_H

#include "LocalPlayerId.h"
#include "ReferenceObjectData.h"

class SpatialReferenceObjectData :
	public ReferenceObjectData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427E7C10;
	}
	LocalPlayerId m_LocalPlayerId; // 0x90
	unsigned char _0x94[0xc];
}; // size = 0xa0

#endif // FBGEN_SpatialReferenceObjectData_H
