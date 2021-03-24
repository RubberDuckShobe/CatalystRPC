//
// Generated with FrostbiteGen by Chod
// File: SDK\PamFootPlantEntityData.h
// Created: Wed Mar 10 19:04:38 2021
//

#ifndef FBGEN_PamFootPlantEntityData_H
#define FBGEN_PamFootPlantEntityData_H

#include "EntityData.h"

class PamFootPlantEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014286B1D0;
	}
	float m_ToeEffectorOffset; // 0x18
	float m_FootEffectorOffset; // 0x1c
}; // size = 0x20

#endif // FBGEN_PamFootPlantEntityData_H
