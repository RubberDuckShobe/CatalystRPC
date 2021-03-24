//
// Generated with FrostbiteGen by Chod
// File: SDK\ColorKeyframe.h
// Created: Wed Mar 10 19:07:40 2021
//

#ifndef FBGEN_ColorKeyframe_H
#define FBGEN_ColorKeyframe_H

#include "Vec4.h"
struct ColorKeyframe
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283DA70;
	}
	Vec4 m_RGBColor; // 0x0
	float m_Time; // 0x10
	unsigned char _0x14[0xc];
}; // size = 0x20

#endif // FBGEN_ColorKeyframe_H
