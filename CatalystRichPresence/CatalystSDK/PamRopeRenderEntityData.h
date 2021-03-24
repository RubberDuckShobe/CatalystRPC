//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRopeRenderEntityData.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRopeRenderEntityData_H
#define FBGEN_PamRopeRenderEntityData_H

#include "ObjectBlueprint.h"
#include "SkeletonAsset.h"
#include "EntityData.h"

class PamRopeRenderEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142885220;
	}
	ObjectBlueprint* m_Model; // 0x18
	SkeletonAsset* m_Skeleton; // 0x20
}; // size = 0x28

#endif // FBGEN_PamRopeRenderEntityData_H
