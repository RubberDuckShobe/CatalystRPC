//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPaddedSphereData.h
// Created: Wed Mar 10 19:04:16 2021
//

#ifndef FBGEN_PamPaddedSphereData_H
#define FBGEN_PamPaddedSphereData_H

#include "LocatorEntityData.h"

class PamPaddedSphereData :
	public LocatorEntityData // size = 0x70
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014287D8C0;
	}
	float m_Radius; // 0x70
	float m_Padding; // 0x74
	unsigned char _0x78[0x8];
}; // size = 0x80

#endif // FBGEN_PamPaddedSphereData_H
