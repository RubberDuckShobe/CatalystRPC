//
// Generated with FrostbiteGen by Chod
// File: SDK\LightComponentData.h
// Created: Wed Mar 10 19:06:17 2021
//

#ifndef FBGEN_LightComponentData_H
#define FBGEN_LightComponentData_H

#include "LocalLightEntityData.h"
#include "GameComponentData.h"

class LightComponentData :
	public GameComponentData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428220E0;
	}
	LocalLightEntityData* m_Light; // 0x70
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_LightComponentData_H
