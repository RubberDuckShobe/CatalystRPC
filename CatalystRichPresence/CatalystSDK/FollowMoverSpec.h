//
// Generated with FrostbiteGen by Chod
// File: SDK\FollowMoverSpec.h
// Created: Wed Mar 10 19:06:44 2021
//

#ifndef FBGEN_FollowMoverSpec_H
#define FBGEN_FollowMoverSpec_H

#include "FollowFormation.h"
struct FollowMoverSpec
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142828D50;
	}
	FollowFormation m_formation; // 0x0
	float m_followDistance; // 0x4
	float m_arcSpread; // 0x8
}; // size = 0xc

#endif // FBGEN_FollowMoverSpec_H
