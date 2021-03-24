//
// Generated with FrostbiteGen by Chod
// File: SDK\PamAntDrivenMeshPartsEntityData.h
// Created: Wed Mar 10 19:05:08 2021
//

#ifndef FBGEN_PamAntDrivenMeshPartsEntityData_H
#define FBGEN_PamAntDrivenMeshPartsEntityData_H

#include "Realm.h"
#include "Vec3.h"
#include "EntityData.h"

class PamAntDrivenMeshPartsEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286BA10;
	}
	Realm m_Realm; // 0x18
	unsigned char _0x1c[0x4];
	Vec3 m_InitialPositionOffset; // 0x20
	float m_InitialYawRotationOffset; // 0x30
	unsigned char _0x34[0xc];
}; // size = 0x40

#endif // FBGEN_PamAntDrivenMeshPartsEntityData_H
