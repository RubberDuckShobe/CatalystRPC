//
// Generated with FrostbiteGen by Chod
// File: SDK\MeshEmitterControlEntityData.h
// Created: Wed Mar 10 19:05:56 2021
//

#ifndef FBGEN_MeshEmitterControlEntityData_H
#define FBGEN_MeshEmitterControlEntityData_H

#include "MeshEmitterAsset.h"
#include "EntityData.h"

class MeshEmitterControlEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x000000014280A430;
	}
	MeshEmitterAsset* m_MeshEmitter; // 0x18
}; // size = 0x20

#endif // FBGEN_MeshEmitterControlEntityData_H
