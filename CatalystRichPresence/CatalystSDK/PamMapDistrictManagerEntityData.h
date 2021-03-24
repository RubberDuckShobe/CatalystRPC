//
// Generated with FrostbiteGen by Chod
// File: SDK\PamMapDistrictManagerEntityData.h
// Created: Wed Mar 10 19:04:24 2021
//

#ifndef FBGEN_PamMapDistrictManagerEntityData_H
#define FBGEN_PamMapDistrictManagerEntityData_H

#include "Vec3.h"
#include "PamMapDistrictDescription.h"
#include "EntityData.h"

class PamMapDistrictManagerEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880B90;
	}
	float m_UpdateDistance; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_MapPivot; // 0x20
	Vec3 m_PlayerPosition; // 0x30
	float m_DistrictBoundaryWidth; // 0x40
	unsigned char _0x44[0x4];
	PamMapDistrictDescription* m_FallbackDistrict; // 0x48
}; // size = 0x50

#endif // FBGEN_PamMapDistrictManagerEntityData_H
