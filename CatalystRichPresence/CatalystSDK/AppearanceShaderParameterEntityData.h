//
// Generated with FrostbiteGen by Chod
// File: SDK\AppearanceShaderParameterEntityData.h
// Created: Wed Mar 10 19:08:40 2021
//

#ifndef FBGEN_AppearanceShaderParameterEntityData_H
#define FBGEN_AppearanceShaderParameterEntityData_H

#include "AppearanceItemData.h"
#include "Array.h"
#include "EntityData.h"

class AppearanceShaderParameterEntityData :
	public EntityData // size = 0x18
{
public:
	static void* GetTypeInfo()
	{
		return (void*)0x00000001427B5070;
	}
	AppearanceItemData* m_ItemAsset; // 0x18
	const char* m_ItemName; // 0x20
	Array<AppearanceShaderParameter*> m_Parameters; // 0x28
}; // size = 0x30

#endif // FBGEN_AppearanceShaderParameterEntityData_H
