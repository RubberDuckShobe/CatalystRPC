//
// Generated with FrostbiteGen by Chod
// File: SDK\RibbonPointData.h
// Created: Wed Mar 10 19:02:36 2021
//

#ifndef FBGEN_RibbonPointData_H
#define FBGEN_RibbonPointData_H

#include "Vec4.h"
struct RibbonPointData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014283A458;
	}
	Vec4 m_UserMaskLeft; // 0x0
	Vec4 m_UserMaskRight; // 0x10
	float m_Left; // 0x20
	float m_Right; // 0x24
	unsigned char _0x28[0x8];
}; // size = 0x30

#endif // FBGEN_RibbonPointData_H
