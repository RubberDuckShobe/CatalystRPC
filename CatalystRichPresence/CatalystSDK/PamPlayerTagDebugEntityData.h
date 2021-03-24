//
// Generated with FrostbiteGen by Chod
// File: SDK\PamPlayerTagDebugEntityData.h
// Created: Wed Mar 10 19:04:14 2021
//

#ifndef FBGEN_PamPlayerTagDebugEntityData_H
#define FBGEN_PamPlayerTagDebugEntityData_H

#include "Array.h"
#include "EntityData.h"

class PamPlayerTagDebugEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142878420;
	}
	Array<PamPlayerTagDebugLayer> m_Layers; // 0x18
}; // size = 0x20

#endif // FBGEN_PamPlayerTagDebugEntityData_H
