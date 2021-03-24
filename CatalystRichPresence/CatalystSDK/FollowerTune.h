//
// Generated with FrostbiteGen by Chod
// File: SDK\FollowerTune.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FollowerTune_H
#define FBGEN_FollowerTune_H

#include "Asset.h"

class FollowerTune :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829730;
	}
	float m_circulate_minTime; // 0x18
	float m_circulate_maxTime; // 0x1c
	float m_startupSlowness; // 0x20
	float m_startupBulk; // 0x24
	float m_packingPadding; // 0x28
	bool m_circulate_enable; // 0x2c
	unsigned char _0x2d[0x3];
}; // size = 0x30

#endif // FBGEN_FollowerTune_H
