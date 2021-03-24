//
// Generated with FrostbiteGen by Chod
// File: SDK\TerrainEntityData.h
// Created: Wed Mar 10 19:00:29 2021
//

#ifndef FBGEN_TerrainEntityData_H
#define FBGEN_TerrainEntityData_H

#include "ResourceRef.h"
#include "TerrainData.h"
#include "MaterialDecl.h"
#include "GamePhysicsEntityData.h"

class TerrainEntityData :
	public GamePhysicsEntityData // size = 0x90
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428206D0;
	}
	ResourceRef m_DecalsResource; // 0x90
	TerrainData* m_TerrainAsset; // 0x98
	MaterialDecl m_WaterMaterial; // 0xa0
	bool m_Visible; // 0xa4
	unsigned char _0xa5[0xb];
}; // size = 0xb0

#endif // FBGEN_TerrainEntityData_H
