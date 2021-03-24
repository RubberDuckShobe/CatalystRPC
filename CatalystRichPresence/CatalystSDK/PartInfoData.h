//
// Generated with FrostbiteGen by Chod
// File: SDK\PartInfoData.h
// Created: Wed Mar 10 19:03:18 2021
//

#ifndef FBGEN_PartInfoData_H
#define FBGEN_PartInfoData_H

#include "AxisAlignedBox.h"
#include "Vec3.h"
struct PartInfoData
{
	static void* GetTypeInfo()
	{
		return (void*)0x000000014282EC10;
	}
	AxisAlignedBox m_Aabb; // 0x0
	Vec3 m_Translation; // 0x20
}; // size = 0x30

#endif // FBGEN_PartInfoData_H
