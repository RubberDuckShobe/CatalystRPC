//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictDescription.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictDescription_H
#define FBGEN_PamMapDistrictDescription_H

#include "Vec3.h"
#include "DataContainer.h"

class PamMapDistrictDescription :
	public DataContainer // size = 0x10
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880D10;
	}
	int m_DistrictIndex; // 0x10
	unsigned char _0x14[0xc];
	Vec3 m_DistrictColor; // 0x20
	int m_DistrictAreaIndex; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_PamMapDistrictDescription_H
