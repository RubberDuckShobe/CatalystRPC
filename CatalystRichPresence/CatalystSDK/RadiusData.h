//
// Generated with FrostbiteGen by Chod
// File: SDK\RadiusData.h
// Created: Wed Mar 10 19:02:45 2021
//

#ifndef FBGEN_RadiusData_H
#define FBGEN_RadiusData_H

#include "Asset.h"

class RadiusData :
	public Asset // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142829BB0;
	}
	float m_radius; // 0x18
	float m_outerCushion; // 0x1c
	float m_innerCushion; // 0x20
	unsigned char _0x24[0x4];
}; // size = 0x28

#endif // FBGEN_RadiusData_H
