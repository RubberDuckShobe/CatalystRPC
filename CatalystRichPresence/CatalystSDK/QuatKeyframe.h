//
// Generated with FrostbiteGen by Chod
// File: SDK\QuatKeyframe.h
// Created: Wed Mar 10 19:02:46 2021
//

#ifndef FBGEN_QuatKeyframe_H
#define FBGEN_QuatKeyframe_H

#include "Vec4.h"
struct QuatKeyframe
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283BCD0;
	}
	Vec4 m_QuatValue; // 0x0
	float m_Time; // 0x10
	unsigned char _0x14[0xc];
}; // size = 0x20

#endif // FBGEN_QuatKeyframe_H
