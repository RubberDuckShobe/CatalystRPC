//
// Generated with FrostbiteGen by Chod
// File: SDK\FenceModelEntityData.h
// Created: Wed Mar 10 19:06:48 2021
//

#ifndef FBGEN_FenceModelEntityData_H
#define FBGEN_FenceModelEntityData_H

#include "StaticModelEntityData.h"

class FenceModelEntityData :
	public StaticModelEntityData // size = 0xe0
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428209D0;
	}
	float m_Width; // 0xe0
	float m_Angle; // 0xe4
	unsigned char _0xe8[0x8];
}; // size = 0xf0

#endif // FBGEN_FenceModelEntityData_H
