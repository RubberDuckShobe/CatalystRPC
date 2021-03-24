//
// Generated with FrostbiteGen by Chod
// File: SDK\SlidingStateData.h
// Created: Wed Mar 10 19:01:21 2021
//

#ifndef FBGEN_SlidingStateData_H
#define FBGEN_SlidingStateData_H

#include "CharacterStateData.h"

class SlidingStateData :
	public CharacterStateData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282C3E0;
	}
	float m_HorizontalInputScale; // 0x18
	float m_GravityScale; // 0x1c
	float m_CharacterSpringScale; // 0x20
	float m_AllowedDistanceFromGround; // 0x24
}; // size = 0x28

#endif // FBGEN_SlidingStateData_H
