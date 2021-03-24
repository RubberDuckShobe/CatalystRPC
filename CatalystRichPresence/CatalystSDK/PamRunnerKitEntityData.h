//
// Generated with FrostbiteGen by Chod
// File: SDK\PamRunnerKitEntityData.h
// Created: Wed Mar 10 19:04:04 2021
//

#ifndef FBGEN_PamRunnerKitEntityData_H
#define FBGEN_PamRunnerKitEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamRunnerKitEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878000;
	}
	Array<ObjectVariation*> m_ObjectVariations; // 0x18
}; // size = 0x20

#endif // FBGEN_PamRunnerKitEntityData_H
