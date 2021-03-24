//
// Generated with FrostbiteGen by Chod
// File: SDK\PamLineOfSightEntityData.h
// Created: Wed Mar 10 19:04:26 2021
//

#ifndef FBGEN_PamLineOfSightEntityData_H
#define FBGEN_PamLineOfSightEntityData_H

#include "Realm.h"
#include "SpatialEntityData.h"

class PamLineOfSightEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287DDA0;
	}
	Realm m_Realm; // 0x60
	bool m_Enabled; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_PamLineOfSightEntityData_H
