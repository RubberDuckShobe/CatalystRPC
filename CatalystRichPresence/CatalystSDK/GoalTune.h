//
// Generated with FrostbiteGen by Chod
// File: SDK\GoalTune.h
// Created: Wed Mar 10 19:06:38 2021
//

#ifndef FBGEN_GoalTune_H
#define FBGEN_GoalTune_H

#include "Asset.h"

class GoalTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428298B0;
	}
	float m_preferredTurningRadius; // 0x18
	bool m_useCircularApproach; // 0x1c
	unsigned char _0x1d[0x3];
}; // size = 0x20

#endif // FBGEN_GoalTune_H
