//
// Generated with FrostbiteGen by Chod
// File: SDK\WorldData.h
// Created: Wed Mar 10 18:58:44 2021
//

#ifndef FBGEN_WorldData_H
#define FBGEN_WorldData_H

#include "Array.h"
#include "SubWorldData.h"

class WorldData :
	public SubWorldData // size = 0x78
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427EC2D0;
	}
	Array<SubWorldDataComponent*> m_Components; // 0x78
	bool m_IsProceduralLevel; // 0x80
	unsigned char _0x81[0x7];
}; // size = 0x88

#endif // FBGEN_WorldData_H
