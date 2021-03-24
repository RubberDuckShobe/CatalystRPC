//
// Generated with FrostbiteGen by Chod
// File: SDK\AntDynamicAvoidanceBinding.h
// Created: Wed Mar 10 19:08:43 2021
//

#ifndef FBGEN_AntDynamicAvoidanceBinding_H
#define FBGEN_AntDynamicAvoidanceBinding_H

#include "AntRef.h"
struct AntDynamicAvoidanceBinding
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280F6B8;
	}
	AntRef m_TimeUntilCollision; // 0x0
	AntRef m_DistanceUntilCollision; // 0x14
	AntRef m_NormalizedVelocity; // 0x28
	AntRef m_Speed; // 0x3c
}; // size = 0x50

#endif // FBGEN_AntDynamicAvoidanceBinding_H
