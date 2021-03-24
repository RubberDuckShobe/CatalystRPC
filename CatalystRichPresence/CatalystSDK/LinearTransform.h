//
// Generated with FrostbiteGen by Chod
// File: SDK\LinearTransform.h
// Created: Wed Mar 10 19:06:15 2021
//

#ifndef FBGEN_LinearTransform_H
#define FBGEN_LinearTransform_H

#include "Vec3.h"
struct LinearTransform
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001420F21D8;
	}
	Vec3 m_right; // 0x0
	Vec3 m_up; // 0x10
	Vec3 m_forward; // 0x20
	Vec3 m_trans; // 0x30
}; // size = 0x40

#endif // FBGEN_LinearTransform_H
