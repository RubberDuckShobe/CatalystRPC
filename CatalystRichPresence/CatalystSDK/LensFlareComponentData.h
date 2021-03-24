//
// Generated with FrostbiteGen by Chod
// File: SDK\LensFlareComponentData.h
// Created: Wed Mar 10 19:06:20 2021
//

#ifndef FBGEN_LensFlareComponentData_H
#define FBGEN_LensFlareComponentData_H

#include "LensFlareEntityData.h"
#include "GameComponentData.h"

class LensFlareComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142821F60;
	}
	LensFlareEntityData* m_LensFlare; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_LensFlareComponentData_H
