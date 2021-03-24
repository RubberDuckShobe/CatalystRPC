//
// Generated with FrostbiteGen by Chod
// File: SDK\PamProfileOptionEntityData.h
// Created: Wed Mar 10 19:04:13 2021
//

#ifndef FBGEN_PamProfileOptionEntityData_H
#define FBGEN_PamProfileOptionEntityData_H

#include "ProfileOptionData.h"
#include "EntityData.h"

class PamProfileOptionEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001428795C0;
	}
	ProfileOptionData* m_OptionData; // 0x18
}; // size = 0x20

#endif // FBGEN_PamProfileOptionEntityData_H
