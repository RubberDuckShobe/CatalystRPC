//
// Generated with FrostbiteGen by Chod
// File: SDK\AffineProjectionData.h
// Created: Wed Mar 10 19:08:47 2021
//

#ifndef FBGEN_AffineProjectionData_H
#define FBGEN_AffineProjectionData_H

#include "Realm.h"
#include "EntityData.h"

class AffineProjectionData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427BFF10;
	}
	Realm m_Realm; // 0x18
	bool m_OpenStart; // 0x1c
	bool m_OpenStop; // 0x1d
	unsigned char _0x1e[0x2];
}; // size = 0x20

#endif // FBGEN_AffineProjectionData_H
