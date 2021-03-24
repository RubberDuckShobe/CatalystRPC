//
// Generated with FrostbiteGen by Chod
// File: SDK\AxisAlignedBox.h
// Created: Wed Mar 10 19:08:33 2021
//

#ifndef FBGEN_AxisAlignedBox_H
#define FBGEN_AxisAlignedBox_H

#include "Vec3.h"
struct AxisAlignedBox
{
	static void* GetTypeInfo()
	{
		return (void*)0x00000001420F2218;
	}
	Vec3 m_min; // 0x0
	Vec3 m_max; // 0x10
}; // size = 0x20

#endif // FBGEN_AxisAlignedBox_H
