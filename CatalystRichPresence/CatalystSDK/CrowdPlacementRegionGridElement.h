//
// Generated with FrostbiteGen by Chod
// File: SDK\CrowdPlacementRegionGridElement.h
// Created: Wed Mar 10 19:07:24 2021
//

#ifndef FBGEN_CrowdPlacementRegionGridElement_H
#define FBGEN_CrowdPlacementRegionGridElement_H

#include "Vec2.h"
#include "Array.h"
struct CrowdPlacementRegionGridElement
{
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142894430;
	}
	unsigned int m_Tier; // 0x0
	Vec2 m_GridElement; // 0x4
	unsigned char _0xc[0x4];
	Array<CrowdPlacementRegionGridElement> m_Children; // 0x10
	bool m_IsValid; // 0x18
	unsigned char _0x19[0x7];
}; // size = 0x20

#endif // FBGEN_CrowdPlacementRegionGridElement_H
