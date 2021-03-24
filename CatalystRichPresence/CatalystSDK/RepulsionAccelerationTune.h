//
// Generated with FrostbiteGen by Chod
// File: SDK\RepulsionAccelerationTune.h
// Created: Wed Mar 10 19:02:36 2021
//

#ifndef FBGEN_RepulsionAccelerationTune_H
#define FBGEN_RepulsionAccelerationTune_H

#include "Asset.h"

class RepulsionAccelerationTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829AF0;
	}
	float m_initialAcc; // 0x18
	float m_outerCushionAcc; // 0x1c
	float m_innerCushionAcc; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_RepulsionAccelerationTune_H
