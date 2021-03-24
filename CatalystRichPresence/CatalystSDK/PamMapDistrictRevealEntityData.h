//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictRevealEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictRevealEntityData_H
#define FBGEN_PamMapDistrictRevealEntityData_H

#include "PamMapDistrictDescription.h"
#include "EntityData.h"

class PamMapDistrictRevealEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880AD0;
	}
	PamMapDistrictDescription* m_District; // 0x18
	bool m_Highlighted; // 0x20
	unsigned char _0x21[0x7];
}; // size = 0x28

#endif // FBGEN_PamMapDistrictRevealEntityData_H
