//
// Generated with FrostbiteGen by Chod
// File: SDK\PredestructionEntityData.h
// Created: Wed Mar 10 19:03:03 2021
//

#ifndef FBGEN_PredestructionEntityData_H
#define FBGEN_PredestructionEntityData_H

#include "SpatialEntityData.h"

class PredestructionEntityData :
	public SpatialEntityData // size = 0x60
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142810C20;
	}
	float m_Radius; // 0x60
	bool m_Enabled; // 0x64
	unsigned char _0x65[0xb];
}; // size = 0x70

#endif // FBGEN_PredestructionEntityData_H
