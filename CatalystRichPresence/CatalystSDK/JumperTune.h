//
// Generated with FrostbiteGen by Chod
// File: SDK\JumperTune.h
// Created: Wed Mar 10 19:06:24 2021
//

#ifndef FBGEN_JumperTune_H
#define FBGEN_JumperTune_H

#include "Asset.h"

class JumperTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829A30;
	}
	float m_speed; // 0x18
	float m_arcFraction; // 0x1c
	float m_turnBeforeJumpAngle; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_JumperTune_H
