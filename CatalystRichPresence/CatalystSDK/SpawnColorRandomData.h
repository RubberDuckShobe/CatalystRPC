//
// Generated with FrostbiteGen by Chod
// File: SDK\SpawnColorRandomData.h
// Created: Wed Mar 10 19:01:05 2021
//

#ifndef FBGEN_SpawnColorRandomData_H
#define FBGEN_SpawnColorRandomData_H

#include "Vec3.h"
#include "ProcessorData.h"

class SpawnColorRandomData :
	public ProcessorData // size = 0x30
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427DBD80;
	}
	Vec3 m_Color0; // 0x30
	Vec3 m_Color1; // 0x40
}; // size = 0x50

#endif // FBGEN_SpawnColorRandomData_H
