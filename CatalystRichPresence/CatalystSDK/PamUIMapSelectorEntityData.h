//
// Generated with FrostbiteGen by Chod
// File: SDK\PamUIMapSelectorEntityData.h
// Created: Wed Mar 10 19:03:27 2021
//

#ifndef FBGEN_PamUIMapSelectorEntityData_H
#define FBGEN_PamUIMapSelectorEntityData_H

#include "Guid.h"
#include "EntityData.h"

class PamUIMapSelectorEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x0000000142880DD0;
	}
	unsigned int m_PartIdx; // 0x18
	Guid m_MapEntityGuid; // 0x1c
	bool m_Visible; // 0x2c
	bool m_Unlocked; // 0x2d
	bool m_Selected; // 0x2e
	bool m_Highlighted; // 0x2f
}; // size = 0x30

#endif // FBGEN_PamUIMapSelectorEntityData_H
